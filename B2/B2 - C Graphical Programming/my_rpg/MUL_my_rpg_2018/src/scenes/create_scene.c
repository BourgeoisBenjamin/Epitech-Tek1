/*
** EPITECH PROJECT, 2019
** MY_RPG
** File description:
** create_scene
*/

#include "rpg.h"

t_scenes *create_scene(t_game_object *objs, t_button *buttons, t_text *texts,
t_music *musics)
{
    t_scenes *new_scene = malloc(sizeof(t_scenes));

    if (new_scene == NULL)
        return (NULL);

    new_scene->system = malloc(sizeof(t_particle_info*));
    if (new_scene->system == NULL)
        return (NULL);
    new_scene->system[0] = NULL;
    new_scene->objs = objs;
    new_scene->clock = sfClock_create();
    new_scene->buttons = buttons;
    new_scene->texts = texts;
    new_scene->musics = musics;
    new_scene->npc = NULL;
    new_scene->nb_fight = 0;

    return (new_scene);
}
