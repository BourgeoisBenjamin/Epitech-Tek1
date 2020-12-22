/*
** EPITECH PROJECT, 2018
** Bistro-Matic Project
** File description:
** Main.c for the Bistro-matic Project
*/

#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "bistromatic.h"
#include "my.h"

int main(int ac, char **av)
{
    unsigned int size;
    char *expr;

    if (ac != 4) {
        man(av);
        return (EXIT_USAGE);
    }
    check_base(av[1]);
    check_ops(av[2]);
    check_base_operands(av);
    size = my_atoi(av[3]);
    expr = get_expr(size);
    count_parenth(expr);
    my_putstr(eval_expr(expr, size));
    return (EXIT_SUCCESS);
}
