/*
** EPITECH PROJECT, 2019
** MY_RPG
** File description:
** duplicate_obj
*/

#include "rpg.h"

t_game_object *duplicate_obj_attrib(t_game_object *original, t_game_object *new)
{
    if (original->cht == NULL) {
        new->cht = NULL;
        return (new);
    }
    if ((new->cht = malloc(sizeof(t_charac_obj))) == NULL)
        return (delete_inside_obj(new));
    new->cht->life = original->cht->life;
    new->cht->damage = original->cht->damage;
    new->cht->price = original->cht->price;
    return (new);
}

t_game_object *duplicate_obj(t_game_object *original)
{
    t_game_object *new = malloc(sizeof(t_game_object));
    if (new == NULL)
        return (NULL);
    new->type = original->type;
    new->texture = sfTexture_copy(original->texture);
    new->sprite = sfSprite_copy(original->sprite);
    new->position = original->position;
    new->rect = original->rect;
    new->offset = original->offset;
    new->max_value = original->max_value;
    new->next = NULL;
    return (duplicate_obj_attrib(original, new));
}
