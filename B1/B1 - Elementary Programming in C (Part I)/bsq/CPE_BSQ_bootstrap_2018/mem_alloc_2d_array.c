/*
** EPITECH PROJECT, 2018
** Bootstrap BSQ
** File description:
** mem_alloc_2d_array
*/

#include <stdlib.h>
#include <stddef.h>

char **mem_alloc_2d_array(int nb_rows, int nb_cols)
{
    char **tab = malloc(sizeof(char*) * nb_rows);

    if (tab) {
        for (int i = 0; i < nb_rows; i++) {
            tab[i] = malloc(sizeof(char) * nb_cols);
            if (tab[i] == NULL)
                return 0;
        }
    } else {
        return 0;
    }
    return tab;
}
