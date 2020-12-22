/*
** EPITECH PROJECT, 2019
** MY_RPG
** File description:
** update_particle
*/

#include "rpg.h"

t_particle *update_particle(t_particle_info *system, t_particle *particle)
{
    float angle_in_radian = 0;
    particle->lifespan -= system->dp;

    if (particle->lifespan > 0) {
        angle_in_radian = (particle->angle * M_PI / 180);
        particle->velocity.x = particle->speed * cos(angle_in_radian);
        particle->velocity.y = -particle->speed * sin(angle_in_radian);
        particle->position.x += particle->velocity.x * system->dp;
        particle->position.y += particle->velocity.y * system->dp;
        particle->color.a = particle->lifespan;
        if (particle->circle != NULL) {
            sfCircleShape_setFillColor(particle->circle, particle->color);
            sfCircleShape_setPosition(particle->circle, particle->position);
        } else {
            sfRectangleShape_setFillColor(particle->rect, particle->color);
            sfRectangleShape_setPosition(particle->rect, particle->position);
        }
    }
    return (particle);
}
