/*
** EPITECH PROJECT, 2018
** tetris
** File description:
** key_quit_ft
*/

#include "tetris.h"

int key_quit_ft(t_tetris *info)
{
    info->settings->is_quit = 1;
    return (0);
}
