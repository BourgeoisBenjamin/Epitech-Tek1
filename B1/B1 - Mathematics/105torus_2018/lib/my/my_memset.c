/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_memset.c
*/

#include <my.h>

void my_memset(void *dest, char c, int size)
{
    int i = 0;
    char *d = dest;

    if (d != NULL) {
        while (i < size) {
            d[i] = c;
            i++;
        }
    }
}

void *my_calloc(int n, int size)
{
    void *ptr = malloc(size * n);

    if (ptr == NULL)
        return NULL;

    my_memset(ptr, '\0', n);

    return ptr;
}