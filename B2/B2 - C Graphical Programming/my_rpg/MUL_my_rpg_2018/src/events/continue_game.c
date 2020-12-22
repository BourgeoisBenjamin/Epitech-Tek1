/*
** EPITECH PROJECT, 2019
** MY RPG
** File description:
** continue_game
*/

#include "rpg.h"

int continue_game(t_rpg *game)
{
    stop_all_music(game);
    game->old_scene = game->scene;
    game->scene = game->actual_game;
    restart_clock(game->scenes_array[game->scene]->clock);
    return (0);
}
