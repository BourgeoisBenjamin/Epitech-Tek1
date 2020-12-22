/*
** EPITECH PROJECT, 2019
** LIBMY
** File description:
** add_node_end
*/

#include "my.h"

list_t *add_node_end(list_t *list, node_t *new)
{
    node_t *tmp = list->start;

    while (tmp->next)
        tmp = tmp->next;

    tmp->next = new;
    list->len += 1;
    return (list);
}
