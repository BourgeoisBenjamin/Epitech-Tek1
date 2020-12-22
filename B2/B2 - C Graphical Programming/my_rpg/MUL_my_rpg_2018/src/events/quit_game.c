/*
** EPITECH PROJECT, 2019
** MY RPG
** File description:
** quit_game
*/

#include "rpg.h"

int quit_game(t_rpg *game)
{
    sfRenderWindow_close(game->window);
    return (0);
}
