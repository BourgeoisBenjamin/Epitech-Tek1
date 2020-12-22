/*
** EPITECH PROJECT, 2018
** tetris
** File description:
** key_drop_ft
*/

#include "tetris.h"

int key_drop_ft(t_tetris *info)
{
    while (is_contact(info->settings, info->game, info->decor) == false) {
        movement_tetriminos(info);
        manage_contact(info);
        display_game(info);
    }
    display_game(info);
    return (0);
}
