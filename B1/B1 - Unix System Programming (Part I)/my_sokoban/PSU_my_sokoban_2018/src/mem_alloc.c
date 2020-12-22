/*
** EPITECH PROJECT, 2018
** Sokoban
** File description:
** mem_alloc.c
*/

#include <sokoban.h>

char *mem_alloc(char const *a, char const *b)
{
    char *str = malloc(sizeof(char) * (my_strlen(a) + my_strlen(b) + 1));
    int i = 0;
    int j = 0;
    if (str == NULL) {
        free(str);
        exit(84);
    }
    while (a[j] != '\0') {
            str[i] = a[j];
            i++;
            j++;
    }
    j = 0;
    while (b[j] != '\0') {
            str[i] = b[j];
            i++;
            j++;
    }
    str[i] = '\0';
    return str;
}