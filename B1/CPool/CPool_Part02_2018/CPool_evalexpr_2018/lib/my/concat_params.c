/*
** EPITECH PROJECT, 2018
** concat_params.c
** File description:
** Task 02 of Pool Day 08
*/

#include <stdlib.h>

int my_strlen(char const *str);

char *my_strcat(char *dest, char const *src);

char *concat_params(int argc, char **argv)
{
    char *dest;
    int len = argc;

    for (int i = 0; i < argc; i++) {
        len = len + my_strlen(argv[i]);
    }

    dest = malloc(sizeof(char) * len);
    for (int i = 0; i < argc; i++) {
        my_strcat(dest, argv[i]);
        if (i != argc - 1) {
            my_strcat(dest, "\n");
        } else {
            my_strcat(dest, "\0");
        }
    }
    return dest;
}
