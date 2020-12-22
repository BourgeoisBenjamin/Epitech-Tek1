/*
** EPITECH PROJECT, 2018
** BSQ
** File description:
** str_to_2d_array.c
*/

#include <bsq.h>

char **str_to_2d_array(char *str, int nb_rows, int nb_cols)
{
    int count = 0;
    int j = 0;
    check_str(str);
    char **tab = mem_alloc_2d_array(nb_rows, nb_cols);

    while (str[count] != '.' && str[count] != 'o') {
        count++;
    }

    for (int i = 0; i < nb_rows; i++) {
        for (j = 0; j < nb_cols; j++) {
            tab[i][j] = str[count];
            count++;
        }
        count++;
        j = 0;
    }
    return tab;
}
