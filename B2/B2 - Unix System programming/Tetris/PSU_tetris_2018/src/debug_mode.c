/*
** EPITECH PROJECT, 2019
** TETRIS
** File description:
** debug_mode
*/

#include "tetris.h"

void display_key(char *key_name, char *key)
{
    my_printf("%s : ", key_name);
    if (key[0] == 27)
        my_printf("^E%s\n", &key[1]);
    else if (key[0] == ' ')
        my_printf("(space)\n");
    else
        my_printf("%s\n", key);
}

void display_keys(t_settings *settings)
{
    display_key("Key Left", settings->key_left2);
    display_key("Key Right", settings->key_right2);
    display_key("Key Turn", settings->key_turn);
    display_key("Key Drop", settings->key_drop);
    display_key("Key Quit", settings->key_quit);
    display_key("Key Pause", settings->key_pause);
}

void display_settings(t_settings *settings)
{
    my_printf("Next : %s\n", settings->hide_next ? "No" : "Yes");
    my_printf("Level : %i\n", settings->level);
    my_printf("Size : %i*%i\n", settings->row, settings->col);
}

void display_tetriminos(t_tetriminos **tab_tetri)
{
    my_printf("Tetriminos : %i\n", get_nb_tetriminos(tab_tetri));
    for (int i = 0; tab_tetri[i]; i++) {
        if (tab_tetri[i]->error)
            my_printf("Tetriminos : Name %s : Error\n", tab_tetri[i]->name);
        else {
            my_printf("Tetriminos : Name %s : Size %i*%i : Color %i :\n",
            tab_tetri[i]->name, tab_tetri[i]->width, tab_tetri[i]->height,
            tab_tetri[i]->color);
            print_array(tab_tetri[i]->form);
        }
    }
}

int debug_mode(t_tetris *info)
{
    char *buff = NULL;
    my_printf("*** DEBUG MODE ***\n");
    display_keys(info->settings);
    display_settings(info->settings);
    display_tetriminos(info->tetriminos);
    my_printf("Press any key to start Tetris\n");
    set_input_term(1);
    read(0, &buff, 1);
    set_input_term(0);
    return (0);
}
