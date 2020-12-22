/*
** EPITECH PROJECT, 2018
** my_runner
** File description:
** create_object
*/

#include <runner.h>

t_game_object *create_object(const char *path, sfVector2f pos,
    sfIntRect rect)
{
    t_game_object *object = malloc(sizeof(t_game_object));

    if (object != NULL) {
        object->texture = sfTexture_createFromFile(path, NULL);
        object->sprite = sfSprite_create();
        sfSprite_setTexture(object->sprite, object->texture, sfTrue);
        sfSprite_setTextureRect(object->sprite, rect);
        sfSprite_setPosition(object->sprite, pos);
        object->rect = rect;
        object->vitesse = 0;
        object->clock = sfClock_create();
        object->gravity = 35;
        object->text = NULL;
        object->music = NULL;
        object->next = NULL;
        object->position = pos;
    }
    return object;
}