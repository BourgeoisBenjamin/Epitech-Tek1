/*
** EPITECH PROJECT, 2018
** tetris
** File description:
** manage_clock
*/

#include "tetris.h"

int manage_clock(t_tetris *info)
{
    clock_t start = clock();
    clock_t end = clock();

    while (((float)(end - start) * 1000 / CLOCKS_PER_SEC) < 0.75 /
    info->settings->level) {
        read_key(info);
        end = clock();
    }
    return (0);
}
