/*
** EPITECH PROJECT, 2019
** MY RPG
** File description:
** quit_conv_scene
*/

#include "rpg.h"

int quit_conv_scene(t_rpg *game)
{
    delete_tmp_conv_scene(game->scenes_array[CONV_SCENE]);
    game->old_scene = game->scene;
    game->scene = game->actual_game;
    restart_clock(game->scenes_array[game->scene]->clock);
    return (0);
}
