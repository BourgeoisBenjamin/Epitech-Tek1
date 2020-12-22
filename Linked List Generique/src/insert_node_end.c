/*
** EPITECH PROJECT, 2019
** PROJECT
** File description:
** insert_node_end
*/

#include <header.h>

list_t *insert_node_end(list_t *list, node_t *new)
{
    node_t *tmp = list->start;

    while (tmp->next)
        tmp = tmp->next;

    tmp->next = new;
    list->len += 1;
    return (list);
}
