/*
** EPITECH PROJECT, 2019
** MY RPG
** File description:
** player_to_obj
*/

#include "rpg.h"

t_game_object *player_to_obj(t_player *player, sfVector2f position)
{
    t_game_object *new = malloc(sizeof(t_game_object));

    if (new == NULL)
        return (NULL);
    new->type = OBJ_O;
    new->texture = sfTexture_copy(player->texture);
    new->sprite = sfSprite_copy(player->sprite);
    new->position = position;
    sfSprite_setPosition(new->sprite, new->position);
    new->rect = player->rect;
    new->offset = player->offset;
    new->max_value = player->max_value;
    new->cht = NULL;
    new->next = NULL;

    return (new);
}
