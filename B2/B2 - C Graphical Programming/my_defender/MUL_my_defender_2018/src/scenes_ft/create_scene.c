/*
** EPITECH PROJECT, 2019
** MY_DEFENDER
** File description:
** init_scene
*/

#include "defender.h"

t_scenes *create_scene(t_game_object *objs, t_button *buttons, t_text *texts,
t_music *musics)
{
    t_scenes *new_scene = malloc(sizeof(t_scenes));

    if (new_scene == NULL)
        return NULL;

    new_scene->objs = objs;
    new_scene->buttons = buttons;
    new_scene->texts = texts;
    new_scene->musics = musics;
    new_scene->clock = sfClock_create();

    return new_scene;
}
