/*
** EPITECH PROJECT, 2018
** my_list_size.c
** File description:
** Task02 of Pool Day11
*/

#include <my.h>
#include <stdlib.h>
#include <mylist.h>

int my_list_size(linked_list_t const *begin)
{
    int size = 0;

    while (begin != NULL) {
        size++;
        begin = begin->next;
    }
    return size;
}
