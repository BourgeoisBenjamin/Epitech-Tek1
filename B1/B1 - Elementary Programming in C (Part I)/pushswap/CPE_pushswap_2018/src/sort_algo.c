/*
** EPITECH PROJECT, 2018
** pushswap
** File description:
** sort_algo
*/

#include <pushswap.h>

int sort_list(t_list *l_a, t_list *l_b)
{
    if (l_a->length == 1 || !(is_sort(l_a))) {
        my_printf("\n");
        return 0;
    } else {
        sort_algo(l_a, l_b);
    }
    return 0;
}

int sort_algo(t_list *l_a, t_list *l_b)
{
    while (is_sort(l_a) || l_b->length != 0) {
        select_sort_a(l_a, l_b);
        while (is_sort(l_a) == 0 && l_b->start != NULL) {
            t_list_pa(l_a, l_b);
            display_operation("pa", l_a, l_b);
        }
    }
    return 0;
}

int select_sort_a(t_list *l_a, t_list *l_b)
{
    if (l_a->start->data >= l_a->end->data) {
        t_list_ra(l_a);
        display_operation("ra", l_a, l_b);
    }
    if (l_a->start->data > l_a->start->next->data) {
        t_list_sa(l_a);
        display_operation("sa", l_a, l_b);
    }
    if (is_sort(l_a) == 1 && (l_a->start->data < l_a->start->next->data)) {
        t_list_pb(l_a, l_b);
        display_operation("pb", l_a, l_b);
        sort_algo_b(l_a, l_b);
    }
    return 0;
}

int sort_algo_b(t_list *l_a, t_list *l_b)
{
    if (l_b->start->next) {
        if (l_b->start->data <= l_b->end->data) {
            t_list_rb(l_b);
            display_operation("rb", l_a, l_b);
        }
        if (l_b->start->data < l_b->start->next->data) {
            t_list_sb(l_b);
            display_operation("sb", l_a, l_b);
        }
    }
    return 0;
}