/*
** EPITECH PROJECT, 2019
** MY_RPG
** File description:
** delete_tmp_conv_scene
*/

#include "rpg.h"

void delete_tmp_conv_scene(t_scenes *conv_scene)
{
    t_game_object *to_free = NULL;

    for (t_game_object *tmp = conv_scene->objs->next; tmp;) {
        to_free = tmp;
        tmp = tmp->next;
        conv_scene->objs = delete_obj(conv_scene->objs, to_free);
    }
    conv_scene->texts->next->next = NULL;
}
