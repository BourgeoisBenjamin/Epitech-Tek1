/*
** EPITECH PROJECT, 2018
** BSQ
** File description:
** replace and display solved map
*/

#include <bsq.h>

void replace_map_solve(char **tab, t_square *square)
{
    int i = 0;
    int j = 0;

    for (i = 0; i < square->size; i++) {
        for (j = 0; j < square->size; j++) {
            tab[square->rows + i][square->cols + j] = 'x';
        }
    }
}

void display_map_solve(char **tab, t_bsq *bsq)
{
    int i = 0;
    int j = 0;

    for (i = 0; i < bsq->original_rows; i++) {
        for (j = 0; j < bsq->original_cols; j++) {
            my_putchar(tab[i][j]);
        }
        my_putchar('\n');
    }
}