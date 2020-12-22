/*
** EPITECH PROJECT, 2019
** MY_DEFENDER
** File description:
** start_menu
*/

#include "defender.h"

void start_menu(t_game *game)
{
    game->instance->scene = 1;
}

void menu_start(t_game *game)
{
    game->instance->scene = 0;
}