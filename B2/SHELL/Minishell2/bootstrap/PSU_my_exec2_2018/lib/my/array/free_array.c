/*
** EPITECH PROJECT, 2019
** libmy
** File description:
** free_array
*/

#include "my.h"

void free_array(char **array)
{
    if (array) {
        for (int i = 0; array[i] != NULL; i++) {
            if (array[i])
                free(array[i]);
        }
        free(array);
    }
}
