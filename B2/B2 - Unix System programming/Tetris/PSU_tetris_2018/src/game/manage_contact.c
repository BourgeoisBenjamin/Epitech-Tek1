/*
** EPITECH PROJECT, 2018
** tetris
** File description:
** manage_contact
*/

#include "tetris.h"

void contact(t_tetris *info)
{
    for (int i = info->settings->row - 1; i >= 0; i--) {
        for (int j = 1; j <= info->settings->col; j++) {
            if (info->game[i][j] != ' ' && info->decor[i][j] != '*')
                info->decor[i][j] = '*';
        }
    }
}

int manage_contact(t_tetris *info)
{
    for (int i = info->settings->row - 1; i >= 0; i--) {
        for (int j = 1; j <= info->settings->col; j++) {
            if (info->game[i][j] != ' ' && info->decor[i][j] != '*'
            && info->decor[i + 1][j] == '*') {
                contact(info);
                return (1);
            }
        }
    }
    return (0);
}
