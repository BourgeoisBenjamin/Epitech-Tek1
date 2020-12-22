/*
** EPITECH PROJECT, 2019
** MY_RPG
** File description:
** delete_particle
*/

#include "rpg.h"

void delete_particle(t_particle *particle)
{
    if (particle == NULL)
        return;
    if (particle->circle != NULL)
        sfCircleShape_destroy(particle->circle);
    if (particle->rect != NULL)
        sfRectangleShape_destroy(particle->rect);
    free(particle);
}
