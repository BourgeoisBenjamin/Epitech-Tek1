/*
** EPITECH PROJECT, 2019
** MY RPG
** File description:
** create_npc
*/

#include "rpg.h"

t_npc *create_npc(char *filepath, sfVector2f position,
sfIntRect rect, int max_value)
{
    t_npc *new = malloc(sizeof(t_npc));
    sfVector2f scale = {1.5, 1.5};
    if (new == NULL)
        return (NULL);

    new->texture = sfTexture_createFromFile(filepath, NULL);
    new->sprite = sfSprite_create();
    sfSprite_setTexture(new->sprite, new->texture, sfTrue);
    sfSprite_setTextureRect(new->sprite, rect);
    sfSprite_setPosition(new->sprite, position);
    sfSprite_setScale(new->sprite, scale);
    new = init_value_npc(new, position, rect, max_value);
    return (new);
}

t_npc *init_value_npc(t_npc *new, sfVector2f position,
sfIntRect rect, int max_value)
{
    new->position = position;
    new->position_init = position;
    new->zone = 300;
    new->rect = rect;
    new->offset = rect.width;
    new->offset_height = rect.height;
    new->max_value = max_value;
    new->move_every = rand() % 10;
    new->time_left = 0;
    new->dir = 0;
    new->life = 100;
    new->damage = 20;
    new->defense = 10;
    new->list_text = NULL;
    new->next = NULL;
    return (new);
}
