/*
** EPITECH PROJECT, 2019
** TETRIS
** File description:
** init_settings
*/

#include "tetris.h"

t_settings *init_settings(void)
{
    int i = 0;
    t_settings *settings = malloc(sizeof(t_settings));
    if (settings == NULL || setupterm(NULL, 0, &i) < 0)
        return (NULL);
    settings->argv = NULL;
    settings->help = 0;
    settings->level = 1;
    settings->key_left2 = my_strdup(tigetstr("kcub1"));
    settings->key_right2 = my_strdup(tigetstr("kcuf1"));
    settings->key_turn = my_strdup(tigetstr("kcuu1"));
    settings->key_drop = my_strdup(tigetstr("kcud1"));
    settings->key_quit = my_strdup("q");
    settings->key_pause = my_strdup(" ");
    settings->row = 20;
    settings->col = 10;
    settings->hide_next = 0;
    settings->debug = 0;
    settings->is_quit = 0;
    settings->is_pause = 0;
    return (settings);
}
