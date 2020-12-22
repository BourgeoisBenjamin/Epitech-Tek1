/*
** EPITECH PROJECT, 2019
** MY_DEFENDER
** File description:
** add_scene
*/

#include "defender.h"

int get_nb_scene(t_scenes **scenes)
{
    int nb_scenes = 0;
    while (scenes[nb_scenes] != NULL)
        nb_scenes++;
    return nb_scenes;
}

t_scenes **add_scene(t_scenes **scenes, t_scenes *to_add)
{
    int nb_scenes = get_nb_scene(scenes);
    t_scenes **new_array = malloc(sizeof(t_scenes) * (nb_scenes + 2));

    if (new_array == NULL)
        return NULL;

    for (int i = 0; scenes[i]; i++)
        new_array[i] = scenes[i];
    new_array[nb_scenes] = to_add;
    new_array[nb_scenes + 1] = NULL;

    free(scenes);
    return new_array;
}
