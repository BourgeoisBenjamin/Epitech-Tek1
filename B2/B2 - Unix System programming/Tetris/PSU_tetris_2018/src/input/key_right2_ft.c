/*
** EPITECH PROJECT, 2018
** tetris
** File description:
** key_right2_ft
*/

#include "tetris.h"

int key_right2_condition(t_tetris *info, char **cpy, int i, int j)
{
    if (info->game[i][j] != ' ' && info->decor[i][j] != '*') {
        if (info->decor[i][j + 1] != '*') {
            info->game[i][j + 1] = info->game[i][j];
            info->game[i][j] = ' ';
        } else {
            free_array(info->game);
            info->game = cpy;
            return (1);
        }
    }
    return (0);
}

int key_right2_ft(t_tetris *info)
{
    char **cpy = my_array_cpy(info->game);

    for (int j = info->settings->col; j > 0; j--) {
        for (int i = 0; i < info->settings->row - 1; i++) {
            if (key_right2_condition(info, cpy, i, j) == 1)
                return (1);
        }
    }
    free_array(cpy);
    display_game(info);
    return (0);
}
