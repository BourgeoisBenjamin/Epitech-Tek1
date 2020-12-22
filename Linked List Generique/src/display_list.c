/*
** EPITECH PROJECT, 2019
** PROJECT
** File description:
** insert_node_end
*/

#include <header.h>

void display_list(list_t *list)
{
    for (node_t *tmp = list->start; tmp; tmp = tmp->next)
        printf("(%i)\n", tmp->data->nb);
}
