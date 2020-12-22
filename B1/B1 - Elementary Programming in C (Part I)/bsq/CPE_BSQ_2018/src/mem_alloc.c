/*
** EPITECH PROJECT, 2018
** Bootstrap BSQ
** File description:
** mem_alloc.c
*/

#include <bsq.h>

char *mem_alloc(char const *a, char const *b)
{
    char *str;
    int i = 0;
    int j = 0;
    str = malloc(sizeof(char) * (my_strlen(a) + my_strlen(b) + 1));

    if (str == NULL) {
        free(str);
        exit(84);
    }

    for (; a[j] != '\0'; i++, j++)
        str[i] = a[j];

    for (j = 0; b[j] != '\0'; j++, i++)
        str[i] = b[j];

    str[i] = '\0';
    return str;
}
