/*
** EPITECH PROJECT, 2018
** Bootstrap BSQ
** File description:
** mem_alloc.c
*/

#include <stdlib.h>

char *my_putstr(char *str);
int my_strlen(char const *str);

char *mem_alloc(char const *a, char const *b)
{
    char *str;
    int i = 0;
    int j = 0;
    str = malloc(sizeof(char) * (my_strlen(a) + my_strlen(b) + 1));

    if (str == NULL)
        return 0;

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
    my_putstr(str);
    return str;
}
