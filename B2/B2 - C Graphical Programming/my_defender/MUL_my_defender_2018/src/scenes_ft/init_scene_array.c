/*
** EPITECH PROJECT, 2019
** MY_DEFENDER
** File description:
** init_scene_array
*/

#include "defender.h"

t_scenes **init_scene_array(void)
{
    t_scenes **array = malloc(sizeof(t_scenes*));
    if (array == NULL)
        return NULL;
    array[0] = NULL;
    return array;
}
