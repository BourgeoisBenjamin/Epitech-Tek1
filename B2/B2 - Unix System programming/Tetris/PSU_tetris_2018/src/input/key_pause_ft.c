/*
** EPITECH PROJECT, 2018
** tetris
** File description:
** key_pause_ft
*/

#include "tetris.h"

int key_pause_ft(t_tetris *info)
{
    if (info->settings->is_pause == 1)
        info->settings->is_pause = 0;
    else
        info->settings->is_pause = 1;
    while (info->settings->is_pause == 1 && info->settings->is_quit == 0) {
        usleep(500);
        read_key(info);
    }
    return (0);
}
