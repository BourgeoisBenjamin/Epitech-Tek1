/*
** EPITECH PROJECT, 2019
** PROJECT
** File description:
** create_node
*/

#include <header.h>

list_t *init_list(void)
{
    list_t *new = malloc(sizeof(list_t));

    if (new == NULL)
        return (NULL);
    new->start = NULL;
    new->len = 0;
    return (new);
}
