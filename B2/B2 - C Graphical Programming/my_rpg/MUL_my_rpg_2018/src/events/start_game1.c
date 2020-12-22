/*
** EPITECH PROJECT, 2019
** MY RPG
** File description:
** start_game1
*/

#include "rpg.h"

int start_game1(t_rpg *game)
{
    stop_all_music(game);
    restart_clock(game->scenes_array[GAME1]->clock);
    game->player->position.x = 210;
    game->player->position.y = 20;
    game->old_scene = game->scene;
    game->scene = GAME1;
    return (0);
}
