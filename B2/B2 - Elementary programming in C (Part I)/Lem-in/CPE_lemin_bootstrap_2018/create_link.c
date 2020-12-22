/*
** EPITECH PROJECT, 2019
** LEM-IN
** File description:
** create_link
*/

#include "graph.h"

link_t *create_link(int data)
{
    link_t *new_link = malloc(sizeof(link_t));

    if (new_link == NULL)
        return NULL;

    new_link->data = data;
    new_link->next = malloc(sizeof(link_t*));
    if (new_link->next == NULL)
        return NULL;
    new_link->next[0] = NULL;
    return new_link;
}
