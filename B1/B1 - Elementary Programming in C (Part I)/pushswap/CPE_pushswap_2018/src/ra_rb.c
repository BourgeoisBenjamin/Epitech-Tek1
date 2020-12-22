/*
** EPITECH PROJECT, 2018
** pushswap
** File description:
** ra_rb.c
*/

#include <pushswap.h>

void t_list_ra(t_list *l_a)
{
    t_node *temp;

    if (l_a->start && l_a->start->next) {
        temp = l_a->start;
        l_a->start = l_a->start->next;
        l_a->start->back = NULL;
        temp->next = NULL;
        temp->back = l_a->end;
        l_a->end->next = temp;
        l_a->end = temp;
    }
}

void t_list_rb(t_list *l_b)
{
    t_node *temp;

    if (l_b->start && l_b->start->next) {
        temp = l_b->start;
        l_b->start = l_b->start->next;
        l_b->start->back = NULL;
        temp->next = NULL;
        temp->back = l_b->end;
        l_b->end->next = temp;
        l_b->end = temp;
    }
}

void t_list_rr(t_list *l_a, t_list *l_b)
{
    t_list_ra(l_a);
    t_list_rb(l_b);
}