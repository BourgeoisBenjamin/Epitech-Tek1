/*
** EPITECH PROJECT, 2018
** Bistro-Matic Project
** File description:
** Main.c for the Bistro-matic Project
*/

#include <unistd.h>
#include <stdlib.h>
#include "bistromatic.h"
#include "my.h"

char *get_expr(unsigned int size)
{
    char *expr;

    if (size <= 0) {
        my_putstr(SYNTAX_ERROR_MSG);
        return NULL;
    }
    expr = malloc(size + 1);
    if (expr == 0) {
        my_putstr(ERROR_MSG);
        exit(84);
    }
    if (read(0, expr, size) != size) {
        my_putstr(ERROR_MSG);
        exit(84);
    }
    expr[size] = '\0';
    return (expr);
}

int check_ops(char const *ops)
{
    if (my_strlen(ops) != 7) {
        my_putstr(SYNTAX_ERROR_MSG);
        return (EXIT_OPS);
    }
    return 0;
}

int check_base(char const *b)
{
    if (my_strlen(b) < 2) {
        my_putstr(SYNTAX_ERROR_MSG);
        return (EXIT_BASE);
    }
    return 0;
}

void man(char **av)
{
    my_putstr("USAGE\n");
    my_putstr(av[0]);
    my_putstr(" base operators size_read\n\nDESCRIPTION\n");
    my_putstr("- base: all the symbols of the base\n");
    my_putstr("- operators: the symbols for the parentheses");
    my_putstr(" and the 5 operators\n");
    my_putstr("- size_read: number of characters to be read\n\n");
    my_putstr("Example : echo '3+6' | ./calc 0123456789 '()+-*/%' 3 ; echo\n");
}

int check_base_operands(char **av)
{
    int count = 0;
    int count_ope = 0;
    
    while (av[1][count] != '\0' && av[2][count] != '\0') {
        while (av[2][count_ope] != '\0' && av[1][count] != av[2][count_ope]) {
            count_ope++;
        }
        if (count_ope != my_strlen(av[2] - count))
            return (EXIT_BASE);
        count++;
        count_ope = count;
    }
    return (0);
}
