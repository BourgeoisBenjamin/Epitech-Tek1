/*
** EPITECH PROJECT, 2018
** pushswap
** File description:
** main
*/

#include <pushswap.h>

int params_to_list(char **argv, t_list *l_a)
{
    int i = 1;

    while (argv[i]) {
        l_a = t_list_append(l_a, my_getnbr(argv[i]));
        i++;
    }
    return 0;
}

int main(int argc, char **argv)
{
    if (argc < 2)
        my_printf("Error, no list given as argument\n");

    t_list *l_a = t_listnew();
    t_list *l_b = t_listnew();

    if (l_a == NULL || l_b == NULL) {
        return 84;
    }

    params_to_list(argv, l_a);

    sort_list(l_a, l_b);
    t_list_delete(&l_a);
    t_list_delete(&l_b);

    return 0;
}