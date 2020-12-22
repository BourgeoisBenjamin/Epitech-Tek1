/*
** EPITECH PROJECT, 2019
** MY RPG
** File description:
** back
*/

#include "rpg.h"

int back(t_rpg *game)
{
    enum scenes type = game->old_scene;
    stop_all_music(game);
    restart_clock(game->scenes_array[game->old_scene]->clock);
    game->old_scene = game->scene;
    game->scene = type;
    return (0);
}
