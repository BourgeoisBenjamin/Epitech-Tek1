/*
** EPITECH PROJECT, 2018
** pushswap
** File description:
** pa_pb.c
*/

#include <pushswap.h>

void t_list_pa(t_list *l_a, t_list *l_b)
{
    if (l_b->start) {
        t_list_prepend(l_a, l_b->start->data);
        if (l_b->length == 1) {
            l_b->start = NULL;
            l_b->end = NULL;
        } else if (l_b->length == 2) {
            l_b->start = l_b->start->next;
            l_b->start->back = NULL;
        } else {
            l_b->start = l_b->start->next;
            l_b->start->back = NULL;
        }
    }
    l_b->length--;
}

void t_list_pb(t_list *l_a, t_list *l_b)
{
    if (l_a->start) {
        t_list_prepend(l_b, l_a->start->data);
        if (l_a->length == 1) {
            l_a->start = NULL;
            l_a->end = NULL;
        } else if (l_a->length == 2) {
            l_a->start = l_a->start->next;
            l_a->start->back = NULL;
        } else {
            l_a->start = l_a->start->next;
            l_a->start->back = NULL;
        }
    }
    l_a->length--;
}