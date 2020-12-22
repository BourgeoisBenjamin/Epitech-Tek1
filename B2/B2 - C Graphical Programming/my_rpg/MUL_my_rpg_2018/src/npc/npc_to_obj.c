/*
** EPITECH PROJECT, 2019
** MY RPG
** File description:
** npc_to_obj
*/

#include "rpg.h"

t_game_object *npc_to_obj(t_npc *npc, sfVector2f position)
{
    t_game_object *new = malloc(sizeof(t_game_object));

    if (new == NULL)
        return (NULL);
    new->type = OBJ_O;
    new->texture = sfTexture_copy(npc->texture);
    new->sprite = sfSprite_copy(npc->sprite);
    new->position = position;
    sfSprite_setPosition(new->sprite, new->position);
    new->rect = npc->rect;
    new->rect.top = 0;
    new->rect.left = npc->rect.left;
    sfSprite_setTextureRect(new->sprite, new->rect);
    new->offset = npc->offset;
    new->max_value = npc->max_value;
    new->cht = NULL;
    new->next = NULL;

    return (new);
}
