/*
** EPITECH PROJECT, 2019
** MY_RPG
** File description:
** create_particle
*/

#include "rpg.h"

void generate_form_particle(t_particle *new)
{
    sfVector2f size = {new->size, new->size};
    int choice = rand() % (100 + 1 - 1) + 1;

    if (choice < 50) {
        new->circle = sfCircleShape_create();
        sfCircleShape_setPosition(new->circle, new->position);
        sfCircleShape_setRadius(new->circle, new->size);
        sfCircleShape_setFillColor(new->circle, new->color);
        new->rect = NULL;
    } else {
        new->rect = sfRectangleShape_create();
        sfRectangleShape_setPosition(new->rect, new->position);
        sfRectangleShape_setSize(new->rect, size);
        sfRectangleShape_setFillColor(new->rect, new->color);
        new->circle = NULL;
    }
}

t_particle *create_particle(t_particle_info *info)
{
    t_particle *new = malloc(sizeof(t_particle));

    if (new == NULL)
        return (NULL);

    new->speed = rand() % (5 - 1) + 1;
    new->angle = rand() % (-180);
    new->position = info->pos;
    new->velocity.x = 0;
    new->velocity.y = 0;
    new->lifespan = 200;
    new->color = info->color;
    new->size = info->size;
    generate_form_particle(new);
    new->next = NULL;
    return (new);
}
