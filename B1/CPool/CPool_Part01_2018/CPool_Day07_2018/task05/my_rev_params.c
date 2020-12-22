/*
** EPITECH PROJECT, 2018
** my_print_params.c
** File description:
** Task 05 of Pool Day07
*/

#include <my.h>

void my_putchar(char c);

void my_rev_params(int argc, char **argv)
{
    while (argc-- > 0) {
        my_putstr(argv[argc]);
        my_putchar('\n');
    }
}

int main(int argc, char **argv)
{
    my_rev_params(argc, argv);
    return 0;
}
