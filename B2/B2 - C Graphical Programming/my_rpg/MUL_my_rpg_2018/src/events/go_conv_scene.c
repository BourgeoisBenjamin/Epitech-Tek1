/*
** EPITECH PROJECT, 2019
** MY RPG
** File description:
** go_conv_scene
*/

#include "rpg.h"

int go_conv_scene(t_rpg *game, t_npc *npc)
{
    game->scenes_array[CONV_SCENE]->objs =
    create_perso1_conv_scene(game->scenes_array[CONV_SCENE]->objs, npc);
    game->scenes_array[CONV_SCENE]->objs =
    create_perso2_conv_scene(game->scenes_array[CONV_SCENE]->objs,
    game->player);
    game->scenes_array[CONV_SCENE]->texts =
    add_text(game->scenes_array[CONV_SCENE]->texts, npc->list_text);
    restart_clock(game->scenes_array[CONV_SCENE]->clock);
    game->old_scene = game->scene;
    game->scene = CONV_SCENE;
    return (0);
}
