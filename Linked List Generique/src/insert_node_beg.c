/*
** EPITECH PROJECT, 2019
** PROJECT
** File description:
** insert_node_beg
*/

#include <header.h>

list_t *insert_node_beg(list_t *list, node_t *new)
{
    node_t *tmp = list->start;

    list->start = new;
    new->next = tmp;
    list->len += 1;
    return (list);
}
