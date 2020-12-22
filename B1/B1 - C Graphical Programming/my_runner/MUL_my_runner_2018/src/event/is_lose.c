/*
** EPITECH PROJECT, 2018
** my_runner
** File description:
** is_lose
*/

#include <runner.h>

void is_lose(t_game *game, t_instance *instance)
{
    if (game->player->start->position.y > 1750 || instance->life <= 0
        || game->player_jump->start->position.x > 1750) {
        instance->dead = 1;
    }
}