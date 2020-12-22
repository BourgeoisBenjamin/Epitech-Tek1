/*
** EPITECH PROJECT, 2019
** MY_RPG
** File description:
** remove_particle
*/

#include "rpg.h"

t_particle *remove_particle(t_particle *list, t_particle *to_delete)
{
    t_particle *tmp = list;

    if (list == NULL)
        return (list);
    if (tmp == to_delete) {
        list = tmp->next;
        delete_particle(to_delete);
        return (list);
    }
    while (tmp->next != to_delete && tmp->next != NULL) {
        tmp = tmp->next;
    }
    if (tmp->next == to_delete) {
        tmp->next = to_delete->next;
        delete_particle(to_delete);
    }
    return (list);
}
