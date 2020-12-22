/*
** EPITECH PROJECT, 2019
** MY_DEFENDER
** File description:
** delete_list_objs
*/

#include "defender.h"

void delete_list_objs(t_game_object *objs)
{
    t_game_object *current = objs;
    t_game_object *next;

    while (current != NULL) {
        if (current->texture)
            sfTexture_destroy(current->texture);
        if (current->sprite)
            sfSprite_destroy(current->sprite);
        if (current->clock)
            sfClock_destroy(current->clock);
        next = current->next;
        free(current);
        current = next;
    }
}
