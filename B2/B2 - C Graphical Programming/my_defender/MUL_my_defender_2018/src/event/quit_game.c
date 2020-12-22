/*
** EPITECH PROJECT, 2019
** MY_DEFENDER
** File description:
** quit_menu
*/

#include "defender.h"

void quit_game(t_game *game)
{
    sfRenderWindow_close(game->window);
}
