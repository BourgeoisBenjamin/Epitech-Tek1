/*
** EPITECH PROJECT, 2019
** TETRIS
** File description:
** game
*/

#include "tetris.h"

int game(t_tetris *info)
{
    if (info->settings->help)
        return (display_help(info->settings));
    if (info->settings->debug)
        debug_mode(info);
    if (loop_game(info) == -1)
        return (-1);
    return (0);
}
