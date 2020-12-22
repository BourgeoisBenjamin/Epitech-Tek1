/*
** EPITECH PROJECT, 2018
** pushswap
** File description:
** is_sort.c
*/

#include <pushswap.h>

int is_sort(t_list *list)
{
    t_node *temp;
    temp = list->start;

    while (temp->next) {
        if (temp->data > temp->next->data) {
            return 1;
        }
        temp = temp->next;
    }
    return 0;
}