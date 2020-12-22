/*
** EPITECH PROJECT, 2018
** tetris
** File description:
** delete_game
*/

#include "tetris.h"

void delete_game(t_tetris *info)
{
    if (info->game != NULL)
        free_array(info->game);
    if (info->decor != NULL)
        free_array(info->decor);
}
