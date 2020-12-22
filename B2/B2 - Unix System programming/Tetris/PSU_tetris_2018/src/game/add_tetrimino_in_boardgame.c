/*
** EPITECH PROJECT, 2018
** tetris
** File description:
** add_tetrimino_in_boardgame
*/

#include "tetris.h"

int is_possible_to_add(t_tetris *info, int pos)
{
    int k = 0;

    for (int i = 0; i < info->current->height; i++) {
        for (int j = pos; j < info->current->width + pos; j++) {
            if (info->current->form[i][k] == '*' && info->decor[i][j] == '*')
                return (-1);
            k++;
        }
        k = 0;
    }
    return (0);
}

int add_tetrimino_in_boardgame(t_tetris *info)
{
    int pos;
    int k = 0;

    pos = rand() % (info->settings->col - info->current->width) + 1;
    if (is_possible_to_add(info, pos) == -1)
        return (-1);
    for (int i = 0; i < info->current->height; i++) {
        for (int j = pos; j < info->current->width + pos; j++) {
            if (info->current->form[i][k] == '*')
                info->game[i][j] = info->current->color + 65;
            else
                info->game[i][j] = ' ';
            k++;
        }
        k = 0;
    }
    return (0);
}
