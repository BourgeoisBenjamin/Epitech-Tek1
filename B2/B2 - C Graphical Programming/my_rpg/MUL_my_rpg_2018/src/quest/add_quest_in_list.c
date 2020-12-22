/*
** EPITECH PROJECT, 2018
** my_rpg
** File description:
** add_quest_in_list
*/

#include "rpg.h"

t_quest *add_quest_in_list(t_quest *list, t_quest *new)
{
    t_quest *tmp = list;

    if (tmp == NULL) {
        list = new;
    } else {
        while (tmp->next != NULL)
            tmp = tmp->next;
        tmp->next = new;
    }
    return (list);
}
