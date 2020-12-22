/*
** EPITECH PROJECT, 2019
** MY RPG
** File description:
** play_start
*/

#include "rpg.h"

int play_start(t_rpg *game)
{
    stop_all_music(game);
    restart_clock(game->scenes_array[PLAYER]->clock);
    game->old_scene = game->scene;
    game->scene = PLAYER;
    return (0);
}
