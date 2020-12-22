/*
** EPITECH PROJECT, 2018
** Bootstrap BSQ
** File description:
** mem_dup_2d_array
*/

#include <stddef.h>
#include <stdlib.h>

int my_strlen(char const *str);
int my_putstr(char const *str);

char **mem_dup_2d_array(char **arr, int nb_rows, int nb_cols)
{
    char **tab = malloc(sizeof(char*) * nb_rows);
    int j = 0;

    if (tab == NULL)
        return NULL;

    for (int i = 0; i < nb_rows; i++) {
        tab[i] = malloc(sizeof(char) * (my_strlen(arr[i]) + 1));
        if (tab[i] == NULL)
            return 0;
        while (arr[i][j] != '\0') {
            tab[i][j] = arr[i][j];
            j++;
        }
        tab[i][j] = '\0';
        j = 0;
    }
    return tab;
}
