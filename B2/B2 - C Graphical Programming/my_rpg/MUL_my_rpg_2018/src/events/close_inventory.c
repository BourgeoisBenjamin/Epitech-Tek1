/*
** EPITECH PROJECT, 2019
** MY RPG
** File description:
** close_inventory
*/

#include "rpg.h"

int close_inventory(t_rpg *game)
{
    delete_tmp_inventory_scene(game->scenes_array[INVENTORY]);
    game->old_scene = game->scene;
    game->scene = game->actual_game;
    restart_clock(game->scenes_array[game->scene]->clock);
    return (0);
}
