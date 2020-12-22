/*
** EPITECH PROJECT, 2018
** concat_params.c
** File description:
** Task 02 of Pool Day 08
*/

#include <stdlib.h>
#include "my.h"

char *concat_params(int argc, char **argv)
{
    char *dest = NULL;
    int len = argc;

    for (int i = 0; i < argc; i++)
        len = len + my_strlen(argv[i]);

    dest = malloc(sizeof(char) * len);

    for (int i = 0; i < argc; i++) {
        my_strcat(dest, argv[i]);
        if (i != argc - 1)
            my_strcat(dest, "\n");
        else
            my_strcat(dest, "\0");
    }
    return dest;
}
