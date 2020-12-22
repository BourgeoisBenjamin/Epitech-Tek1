/*
** EPITECH PROJECT, 2019
** MY_DEFENDER
** File description:
** delete_obj
*/

#include "defender.h"

void delete_inside_obj(t_game_object *to_delete)
{
    if (to_delete->texture)
        sfTexture_destroy(to_delete->texture);
    if (to_delete->sprite)
        sfSprite_destroy(to_delete->sprite);
    if (to_delete->clock)
        sfClock_destroy(to_delete->clock);
    free(to_delete);
}

t_game_object *delete_obj(t_game_object *list_obj, t_game_object *to_delete)
{
    t_game_object *object = list_obj;

    if (object == to_delete) {
        object = object->next;
        delete_inside_obj(to_delete);
        return object;
    }

    while (object->next != to_delete && object->next != NULL) {
        object = object->next;
    }

    if (object->next == NULL && object != to_delete)
        return list_obj;

    object->next = object->next->next;
    delete_inside_obj(to_delete);
    return list_obj;
}
