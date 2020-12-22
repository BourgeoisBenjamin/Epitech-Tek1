/*
** EPITECH PROJECT, 2018
** pushswap
** File description:
** display
*/

#include <pushswap.h>

void display_operation(char *str, t_list *l_a, t_list *l_b)
{
    if (!(is_sort(l_a)) && l_b->start == NULL) {
        my_printf("%s\n", str);
    } else {
        my_printf("%s ", str);
    }
}