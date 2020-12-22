/*
** EPITECH PROJECT, 2019
** MY_RPG
** File description:
** add_particle
*/

#include "rpg.h"

t_particle *add_particle(t_particle *list, t_particle *to_add)
{
    t_particle *tmp = list;

    if (list == NULL)
        return (to_add);

    while (tmp->next) {
        tmp = tmp->next;
    }
    tmp->next = to_add;
    return (list);
}
