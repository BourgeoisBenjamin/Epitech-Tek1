/*
** EPITECH PROJECT, 2018
** pushswap
** File description:
** display
*/

#include <pushswap.h>

void display_operation(char *str, t_list *l_a, t_list *l_b)
{
    my_printf("%s\n", str);
    if (l_a->option == 2) {
        my_printf("L_a : ", str);
        t_list_display(l_a);
        my_printf("\n", str);
        my_printf("L_b : ", str);
        t_list_display(l_b);
    }
}