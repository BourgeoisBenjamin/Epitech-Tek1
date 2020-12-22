/*
** EPITECH PROJECT, 2018
** eval_expr
** File description:
** Main for eval_expr project
*/

#include <my.h>
#include <eval_expr.h>

int main(int ac, char **av)
{
    if (ac == 2) {
        my_put_nbr(eval_expr(av[1]));
        my_putchar('\n');
        return (0);
    }
    return (84);
}
