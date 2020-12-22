/*
** EPITECH PROJECT, 2019
** TETRIS
** File description:
** arg_size
*/

#include "tetris.h"

int arg_size(t_settings *settings)
{
    char **size_tab = my_str_to_word_array(optarg, ',');
    if (size_tab == NULL)
        return (-1);
    if (get_size_array(size_tab) != 2 || !my_str_is_num(size_tab[0])
    || !my_str_is_num(size_tab[1])) {
        free_array(size_tab);
        my_printe("Invalid size\n./tetris --help\n");
        return (-1);
    }
    if (!my_str_is_num(size_tab[0]) || !my_str_is_num(size_tab[1])) {
        free_array(size_tab);
        my_printe("Invalid size\n./tetris --help\n");
        return (-1);
    }
    settings->row = my_getnbr(size_tab[0]);
    settings->col = my_getnbr(size_tab[1]);
    free_array(size_tab);
    return (0);
}
