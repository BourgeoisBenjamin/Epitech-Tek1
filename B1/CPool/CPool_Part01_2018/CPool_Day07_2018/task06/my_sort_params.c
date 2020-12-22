/*
** EPITECH PROJECT, 2018
** my_sort_params.c
** File description:
** Task 06 of Pool Day07
*/

#include <my.h>

void my_sort_params(int argc, char **argv)
{
    int i = 0;
    int j = 0;
    char *temp;
    while (j < argc - 1) {
        while (i < argc - 1) {
            if (my_strcmp(argv[i], argv[i + 1]) > 0) {
                temp = argv[i];
                argv[i] = argv[i + 1];
                argv[i + 1] = temp;
            }
            i++;
        }
        i = 0;
        j++;
    }
    i = 1;
    while (argc > i) {
        my_putstr(argv[i]);
        my_putchar('\n');
        i++;
    }
}

int main(int argc, char **argv)
{
    my_sort_params(argc, argv);
    return 0;
}
