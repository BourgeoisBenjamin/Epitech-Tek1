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

    while (array != NULL && array[i] != NULL) {
        i++;
    }
    return i;
}
