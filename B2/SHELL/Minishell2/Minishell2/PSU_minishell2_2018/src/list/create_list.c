/*
** EPITECH PROJECT, 2019
** MINISHELL2
** File description:
** create_list
*/

#include "minishell2.h"

t_list *create_list(void)
{
    t_list *list = malloc(sizeof(t_list));
    if (list == NULL)
        return (NULL);
    list->start = NULL;
    list->len = 0;
    return (list);
}
