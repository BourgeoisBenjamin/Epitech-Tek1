/*
** EPITECH PROJECT, 2018
** tetris
** File description:
** init_array_game
*/

#include "tetris.h"

char **mem_alloc_2d_array(int nb_rows, int nb_cols)
{
    char **alloc;
    int i = 0;

    alloc = malloc((nb_rows + 1) * sizeof(*alloc));
    if (alloc == NULL)
        return (NULL);
    for (i = 0; i < nb_rows; i++) {
        alloc[i] = malloc((nb_cols) * sizeof(*(alloc[i])));
        if (alloc[i] == NULL) {
            free_array(alloc);
            free(alloc);
            return (NULL);
        }
    }
    alloc[i] = NULL;
    return (alloc);
}

char **init_array_game(t_settings *settings)
{
    char **array = mem_alloc_2d_array(settings->row + 1, settings->col + 2);

    if (array == NULL)
        return (NULL);
    for (int i = 0; array[i] != NULL; i++) {
        for (int j = 0; j < settings->col + 2; j++) {
            array[i][j] = ' ';
            if (j == 0 || j == settings->col + 1)
                array[i][j] = '*';
            if (i == settings->row)
                array[i][j] = '*';
        }
    }
    return (array);
}
