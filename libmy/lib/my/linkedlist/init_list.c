/*
** EPITECH PROJECT, 2019
** LIBMY
** File description:
** init_list
*/

#include "my.h"

list_t *init_list(void (*delete_node)(node_t*))
{
    list_t *new = malloc(sizeof(list_t));

    if (new == NULL)
        return (NULL);
    new->start = NULL;
    new->len = 0;
    new->delete_node = delete_node;
    return (new);
}
