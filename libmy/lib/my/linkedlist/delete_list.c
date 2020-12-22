/*
** EPITECH PROJECT, 2019
** PROJECT
** File description:
** delete_list
*/

#include "my.h"

void delete_list(list_t *list)
{
    node_t *current = list->start;
    node_t *next = NULL;

    while (current != NULL) {
        next = current->next;
        list->delete_node(current);
        current = next;
    }
    free(list);
}
