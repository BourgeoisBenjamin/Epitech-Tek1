/*
** EPITECH PROJECT, 2018
** my_rpg
** File description:
** find_obj_to_delete
*/

#include "rpg.h"

void find_obj_to_delete(t_game_object *list, int quest_nb)
{
    t_game_object *tmp = list;
    t_game_object *to_delete;

    while (tmp->next != NULL) {
        if (tmp->next->quest == quest_nb) {
            to_delete = tmp->next;
            tmp->next = tmp->next->next;
            delete_inside_obj(to_delete);
        }
        if (tmp->next != NULL)
            tmp = tmp->next;
    }
}
