/*
** EPITECH PROJECT, 2019
** MY_RPG
** File description:
** init_scenes_array
*/

#include "rpg.h"

t_scenes **init_scenes_array(void)
{
    t_scenes **array = malloc(sizeof(t_scenes*));
    if (array == NULL)
        return NULL;
    array[0] = NULL;
    return (array);
}
