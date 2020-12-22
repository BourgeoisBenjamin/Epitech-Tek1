/*
** EPITECH PROJECT, 2018
** MY_DEFENDER
** File description:
** create_object
*/

#include "defender.h"

t_game_object *create_object(const char *path, sfVector2f pos,
sfIntRect rect, int max_value)
{
    t_game_object *object = malloc(sizeof(t_game_object));

    if (object != NULL) {
        object->texture = sfTexture_createFromFile(path, NULL);
        object->sprite = sfSprite_create();
        sfSprite_setTexture(object->sprite, object->texture, sfTrue);
        sfSprite_setTextureRect(object->sprite, rect);
        sfSprite_setPosition(object->sprite, pos);
        object->offset = rect.width;
        object->max_value = max_value;
        object->rect = rect;
        object->position = pos;
        object->vitesse = 0;
        object->clock = sfClock_create();
        object->next = NULL;
    }
    return object;
}
