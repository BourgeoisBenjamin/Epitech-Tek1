/*
** EPITECH PROJECT, 2019
** PROJECT
** File description:
** delete_list
*/

#include <header.h>

void delete_list(list_t *list)
{
    node_t *current = list->start;
    node_t *next = NULL;

    while (current != NULL) {
        next = current->next;
        delete_node(current);
        current = next;
    }
    free(list);
}
