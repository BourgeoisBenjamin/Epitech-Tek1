/*
** EPITECH PROJECT, 2019
** MY_RPG
** File description:
** delete_scenes_array
*/

#include "rpg.h"

void delete_scene(t_scenes *scene)
{
    delete_list_objs(scene->objs);
    delete_list_buttons(scene->buttons);
    delete_list_texts(scene->texts);
    delete_list_musics(scene->musics);
    delete_list_npc(scene->npc);
    if (scene->clock)
        sfClock_destroy(scene->clock);
    delete_particle_system_array(scene->system);
    free(scene);
}

void delete_scenes_array(t_scenes **array)
{
    if (array == NULL)
        return;
    for (int i = 0; array[i]; i++) {
        delete_scene(array[i]);
    }
    free(array);
}
