/*
** EPITECH PROJECT, 2018
** pushswap
** File description:
** sa_sb.c
*/

#include <pushswap.h>

void t_list_sa(t_list *l_a)
{
    t_node *temp;
    if (l_a->start && l_a->start->next) {
        temp = l_a->start->next;
        l_a->start->next = l_a->start->next->next;
        l_a->start->back = temp;
        temp->next = l_a->start;
        temp->back = NULL;
        l_a->start = temp;
        if (l_a->length > 2) {
            l_a->start->next->next->back = l_a->start->next;
        }
    }
}

void t_list_sb(t_list *l_b)
{
    t_node *temp;
    if (l_b->start && l_b->start->next) {
        temp = l_b->start->next;
        l_b->start->next = l_b->start->next->next;
        l_b->start->back = temp;
        temp->next = l_b->start;
        temp->back = NULL;
        l_b->start = temp;
        if (l_b-> length > 2) {
            l_b->start->next->next->back = l_b->start->next;
        }
    }
}

void t_list_ss(t_list *l_a, t_list *l_b)
{
    t_list_sa(l_a);
    t_list_sb(l_b);
}