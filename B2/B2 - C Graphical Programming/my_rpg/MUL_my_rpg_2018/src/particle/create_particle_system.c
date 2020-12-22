/*
** EPITECH PROJECT, 2019
** MY_RPG
** File description:
** create_particle
*/

#include "rpg.h"

t_particle_info *create_particle_system(sfColor color, sfVector2f pos,
int dp, float size)
{
    t_particle_info *system = malloc(sizeof(t_particle_info));

    if (system == NULL)
        return (NULL);
    system->color = color;
    system->pos = pos;
    system->dp = dp;
    system->size = size;
    system->system = NULL;

    return (system);
}
