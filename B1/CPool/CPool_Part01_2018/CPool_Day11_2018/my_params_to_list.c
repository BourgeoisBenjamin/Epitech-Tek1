/*
** EPITECH PROJECT, 2018
** my_params_to_list.c
** File description:
** Task01 of Pool Day11
*/

#include <my.h>
#include <stdlib.h>
#include <mylist.h>

struct linked_list *my_put_front_list(char * const data, struct linked_list *list)
{
    struct linked_list *element = malloc(sizeof(*element));

    if (element == NULL) {
        my_puterror("Malloc Failed");
        return NULL;
    }

    element->data = data;
    element->next = list;

    return element;
}

struct linked_list *my_params_to_list(int ac, char * const *av)
{
    struct linked_list *list = NULL;

    for (int i = ac; i > -1; i--) {
        list = my_put_front_list(av[i], list);
    }

    return list;
}
