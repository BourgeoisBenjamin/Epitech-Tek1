/*
** EPITECH PROJECT, 2018
** my_strdup.c
** File description:
** Task01 of Pool Day08
*/

#include <my.h>

char *my_strdup(char const *src)
{
    char *dest = malloc(sizeof(char) * (my_strlen(src) + 1));

    if (dest != NULL) {
        my_strcpy(dest, src);
        return dest;
    }
    return NULL;
}
