/*
** EPITECH PROJECT, 2018
** pushswap
** File description:
** main
*/

#include <pushswap.h>

int params_to_list(char **argv, t_list *l_a, int i)
{
    while (argv[i]) {
        l_a = t_list_append(l_a, my_getnbr(argv[i]));
        i++;
    }
    return 0;
}

int check_params(char **argv)
{
    if (argv[1][0] == '-' && argv[1][1] == 'v') {
        return 2;
    } else {
        return 1;
    }
}

int main(int argc, char **argv)
{
    int i = 0;

    if (argc < 2) {
        my_printf("Error, no list given as argument\n");
    } else {
        i = check_params(argv);
    }

    t_list *l_a = t_listnew();
    t_list *l_b = t_listnew();

    params_to_list(argv, l_a, i);
    l_a->option = i;
    sort_list(l_a, l_b);
    t_list_delete(&l_a);
    t_list_delete(&l_b);

    return 0;
}