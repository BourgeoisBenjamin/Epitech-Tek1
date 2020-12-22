/*
** EPITECH PROJECT, 2019
** PROJECT
** File description:
** create_node
*/

#include <header.h>

node_t *create_node(void *data)
{
    node_t *new = malloc(sizeof(node_t));

    if (new == NULL)
        return (NULL);
    new->data = data;
    new->next = NULL;
    return (new);
}
