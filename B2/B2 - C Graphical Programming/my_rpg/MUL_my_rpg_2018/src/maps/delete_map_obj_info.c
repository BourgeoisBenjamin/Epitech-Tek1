/*
** EPITECH PROJECT, 2018
** my_rpg
** File description:
** delete_map_obj_info
*/

#include "rpg.h"

void delete_map_obj_info(t_map_obj *list)
{
    t_map_obj *current = list;
    t_map_obj *next = NULL;
    if (list == NULL)
        return;

    while (current != NULL) {
        next = current->next;
        free(current);
        current = next;
    }
}
