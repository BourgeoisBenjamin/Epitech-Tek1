/*
** EPITECH PROJECT, 2018
** my_print_params.c
** File description:
** Task 04 of Pool Day07
*/

#include <my.h>

void my_print_params(char **argv)
{
    for (int i = 0; argv[i]; i++) {
        my_putstr(argv[i]);
        my_putchar('\n');
    }
}

int main(int argc, char **argv)
{
    (void)argc;
    my_print_params(argv);
    return 0;
}
