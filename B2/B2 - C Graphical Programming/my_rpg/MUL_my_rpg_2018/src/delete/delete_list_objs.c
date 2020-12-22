/*
** EPITECH PROJECT, 2019
** MY_RPG
** File description:
** delete_list_objs
*/

#include "rpg.h"

void delete_list_objs(t_game_object *list)
{
    t_game_object *current = list;
    t_game_object *next = NULL;
    if (list == NULL)
        return;

    while (current != NULL) {
        if (current->texture)
            sfTexture_destroy(current->texture);
        if (current->sprite)
            sfSprite_destroy(current->sprite);
        if (current->cht)
            free(current->cht);
        next = current->next;
        free(current);
        current = next;
    }
}
