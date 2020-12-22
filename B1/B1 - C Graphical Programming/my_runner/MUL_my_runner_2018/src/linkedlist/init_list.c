/*
** EPITECH PROJECT, 2018
** my_runner
** File description:
** init_list
*/

#include <runner.h>

t_list *init_list(void)
{
    t_list *list = malloc(sizeof(t_list));

    if (list == NULL)
        return list;

    list->start = NULL;
    list->len = 0;
    list->clock = sfClock_create();

    return list;
}