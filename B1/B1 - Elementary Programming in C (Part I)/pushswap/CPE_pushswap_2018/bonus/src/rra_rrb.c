/*
** EPITECH PROJECT, 2018
** pushswap
** File description:
** rra_rrb.c
*/

#include <pushswap.h>

void t_list_rra(t_list *l_a)
{
    t_node *temp;

    if (l_a->end && l_a->end->back) {
        temp = l_a->end;
        l_a->end = l_a->end->back;
        l_a->end->next = NULL;
        temp->next = l_a->start;
        temp->back = NULL;
        l_a->start->back = temp;
        l_a->start = temp;
    }
}

void t_list_rrb(t_list *l_b)
{
    t_node *temp;

    if (l_b->end && l_b->end->back) {
        temp = l_b->end;
        l_b->end = l_b->end->back;
        l_b->end->next = NULL;
        temp->next = l_b->start;
        temp->back = NULL;
        l_b->start->back = temp;
        l_b->start = temp;
    }
}

void t_list_rrr(t_list *l_a, t_list *l_b)
{
    t_list_rra(l_a);
    t_list_rrb(l_b);
}