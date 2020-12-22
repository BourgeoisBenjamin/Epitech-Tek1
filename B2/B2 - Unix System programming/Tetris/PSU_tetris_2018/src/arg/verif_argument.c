/*
** EPITECH PROJECT, 2019
** TETRIS
** File description:
** verif_argument
*/

#include "tetris.h"

int verif_argument(int c, t_tetris *info)
{
    if (c == 'h') return (arg_help(info->settings));
    if (c == 'D') return (arg_debug(info->settings));
    if (c == 'w') return (arg_next(info->settings));
    if (c == 'm') return (arg_size(info->settings));
    if (c == 'L') return (arg_level(info->settings));
    if (c == 'l') return (arg_key_left(info->settings));
    if (c == 'r') return (arg_key_right(info->settings));
    if (c == 't') return (arg_key_turn(info->settings));
    if (c == 'd') return (arg_key_drop(info->settings));
    if (c == 'q') return (arg_key_quit(info->settings));
    if (c == 'p') return (arg_key_pause(info->settings));
    if (c == '?') return (-1);
    return (0);
}
