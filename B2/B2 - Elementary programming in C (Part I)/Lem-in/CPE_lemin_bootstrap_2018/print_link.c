/*
** EPITECH PROJECT, 2019
** LEM-IN
** File description:
** print-link
*/

#include "graph.h"

int my_putchar(int c)
{
    char t = (char)c;
    write(1, &t, 1);
    return 0;
}

int my_put_nbr(int nbr)
{
    int digits = 0;

    if (nbr < 0) {
        my_putchar(45);
        nbr = -nbr;
    }
    if (nbr < 10) {
        my_putchar(nbr + 48);
    }
    else if (nbr > 9) {
        my_put_nbr(nbr / 10);
        digits = nbr % 10;
        my_putchar(digits + 48);
    }
    return 0;
}

void print_link(link_t *link)
{
    if (link != NULL) {
        my_put_nbr(link->data);
        my_putchar('\n');
    }
}
