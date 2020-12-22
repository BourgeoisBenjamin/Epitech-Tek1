/*
** EPITECH PROJECT, 2019
** MY_RPG
** File description:
** create_object
*/

#include "rpg.h"

t_game_object *create_object(const char *path, sfVector2f pos,
sfIntRect rect, int max_value)
{
    t_game_object *object = malloc(sizeof(t_game_object));

    if (object != NULL) {
        object->type = UNKNOWN_O;
        object->texture = sfTexture_createFromFile(path, NULL);
        object->sprite = sfSprite_create();
        object->position = pos;
        sfSprite_setTexture(object->sprite, object->texture, sfTrue);
        sfSprite_setTextureRect(object->sprite, rect);
        sfSprite_setPosition(object->sprite, pos);
        object->rect = rect;
        object->offset = rect.width;
        object->max_value = max_value;
        object->callback = NULL;
        object->cht = NULL;
        object->quest = 0;
        object->next = NULL;
    }
    return (object);
}
