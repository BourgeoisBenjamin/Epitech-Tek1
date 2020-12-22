/*
** EPITECH PROJECT, 2019
** TETRIS
** File description:
** delete_all
*/

#include "tetris.h"

void delete_all(t_tetris *info)
{
    endwin();
    if (info == NULL)
        return;
    if (info->window)
        free(info->window);
    if (cur_term)
        del_curterm(cur_term);
    delete_game(info);
    delete_settings(info->settings);
    delete_tetriminos_array(info->tetriminos);
    free(info);
}
