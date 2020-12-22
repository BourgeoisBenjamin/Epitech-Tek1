/*
** EPITECH PROJECT, 2018
** Bootstrap BSQ
** File description:
** mem_alloc_2d_array
*/

#include <bsq.h>

char **mem_alloc_2d_array(int nb_rows, int nb_cols)
{
    char **tab = malloc(sizeof(char *) * nb_rows);

    if (tab == NULL) {
        free(tab);
        my_puterror("Error, retry\n");
        exit(84);
    }
    for (int i = 0; i < nb_rows; i++) {
        tab[i] = malloc(sizeof(char) * nb_cols);
        if (tab[i] == NULL) {
            free(tab);
            my_puterror("Error, retry\n");
            exit(84);
        }
    }
    return tab;
}
