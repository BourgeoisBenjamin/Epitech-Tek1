/*
** EPITECH PROJECT, 2019
** PROJECT
** File description:
** delete_node_pos
*/

#include <header.h>

void delete_node_pos(list_t *list, int pos)
{
    node_t *tmp = list->start;
    node_t *to_delete = NULL;
    int j = 1;

    if (pos < 1 || pos > list->len) return;
    if (j == pos) {
        list->start = tmp->next;
        delete_node(tmp);
        list->len -= 1;
        return;
    }
    while ((j + 1) < pos && tmp->next != NULL) {
        tmp = tmp->next;
        j++;
    }
    to_delete = tmp->next;
    tmp = tmp->next->next;
    delete_node(to_delete);
    list->len -= 1;
}
