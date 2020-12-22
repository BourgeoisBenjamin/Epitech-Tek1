/*
** EPITECH PROJECT, 2019
** libmy
** File description:
** get_size_array
*/

#include "my.h"

int get_size_array(char **array)
{
    int i = 0;
    if (array == NULL)
        return (i);
    while (array[i] != NULL) {
        i++;
    }
    return (i);
}
