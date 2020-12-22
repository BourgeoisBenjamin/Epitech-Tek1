/*
** EPITECH PROJECT, 2018
** 103cipher
** File description:
** malloc_ft
*/

#include <cipher.h>

int **malloc_int_array(int rows, int cols)
{
    int **key = malloc(sizeof(int *) * rows);

    if (key == NULL)
        exit(84);

    for (int i = 0; i < rows; i++) {
        key[i] = malloc(sizeof(int) * cols);
        if (key[i] == NULL)
            exit(84);
        memset(key[i], 0, cols * sizeof(int));
    }
    return key;
}

double **malloc_double_array(int rows, int cols)
{
    double **key = malloc(sizeof(double *) * rows);

    if (key == NULL)
        exit(84);

    for (int i = 0; i < rows; i++) {
        key[i] = malloc(sizeof(double) * cols);
        if (key[i] == NULL)
            exit(84);
        memset(key[i], 0, cols * sizeof(double));
    }
    return key;
}