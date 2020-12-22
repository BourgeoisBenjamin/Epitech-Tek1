/*
** EPITECH PROJECT, 2019
** TETRIS
** File description:
** arg_level
*/

#include "tetris.h"

int arg_level(t_settings *settings)
{
    int level = 1;
    if (!my_str_is_num(optarg)) {
        my_printe("Invalid level\n./tetris --help\n");
        return (-1);
    }
    level = my_getnbr(optarg);
    if (level <= 0) {
        my_printe("Invalid level\n./tetris --help\n");
        return (-1);
    }
    settings->level = level;
    return (0);
}
