/*
** EPITECH PROJECT, 2019
** MY_RPG
** File description:
** delete_obj
*/

#include "rpg.h"

void *delete_inside_obj(t_game_object *to_delete)
{
    if (to_delete == NULL)
        return (NULL);
    if (to_delete->texture)
        sfTexture_destroy(to_delete->texture);
    if (to_delete->sprite)
        sfSprite_destroy(to_delete->sprite);
    if (to_delete->cht)
        free(to_delete->cht);
    free(to_delete);
    return (NULL);
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
