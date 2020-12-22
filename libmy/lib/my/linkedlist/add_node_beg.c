/*
** EPITECH PROJECT, 2019
** LIBMY
** File description:
** add_node_beg
*/

#include "my.h"

list_t *add_node_beg(list_t *list, node_t *new)
{
    node_t *tmp = list->start;

    list->start = new;
    new->next = tmp;
    list->len += 1;
    return (list);
}
