/*
** EPITECH PROJECT, 2018
** tetris
** File description:
** movement_tetriminos
*/

#include "tetris.h"

int condition_movement_tetriminos(t_tetris *info, int i, int j)
{
    if (info->game[i][j] != ' ' && info->decor[i][j] != '*') {
        if (info->decor[i + 1][j] != '*') {
            info->game[i + 1][j] = info->game[i][j];
            info->game[i][j] = ' ';
        } else {
            return (1);
        }
    }
    return (0);
}

void movement_tetriminos(t_tetris *info)
{
    for (int i = info->settings->row - 1; i >= 0; i--) {
        for (int j = 1; j <= info->settings->col; j++) {
            if (condition_movement_tetriminos(info, i, j) == 1)
                return;
        }
    }
}
