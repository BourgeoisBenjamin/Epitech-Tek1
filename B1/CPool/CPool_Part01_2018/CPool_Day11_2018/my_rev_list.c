/*
** EPITECH PROJECT, 2018
** my_rev_list.c
** File description:
** Task03 of Pool Day 11
*/

#include <mylist.h>
#include <stdlib.h>

void my_rev_list(linked_list_t **begin)
{
    linked_list_t *previous = NULL;
    linked_list_t *current = *begin;
    linked_list_t *next = NULL;

    while (current != NULL) {
        next = current->next;
        current->next = previous;
        previous = current;
        current = next;
    }
    *begin = previous;
}
