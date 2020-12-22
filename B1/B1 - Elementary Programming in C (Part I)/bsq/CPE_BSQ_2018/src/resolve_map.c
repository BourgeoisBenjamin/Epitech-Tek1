/*
** EPITECH PROJECT, 2018
** BSQ
** File description:
** find_biggest_square.c
*/

#include <bsq.h>

int is_square_of_size(char **tab, t_bsq *bsq, t_square *square)
{
    int i = 0;
    int j = 0;

    while (i < square->test_size && i + bsq->rows < bsq->original_rows) {
        j = 0;
        while (j < square->test_size && j + bsq->cols < bsq->original_cols) {
            if (tab[bsq->rows + i][bsq->cols + j] != '.') {
                return 0;
            } else {
                j++;
            }
        }
        i++;
    }
    if (i == square->test_size && j == square->test_size)
        return 1;
    else
        return 0;
}

void test_biggest_square(char **tab, t_bsq *bsq, t_square *square)
{
    square->test_size = 1;

    while (is_square_of_size(tab, bsq, square)) {
        square->test_size = square->test_size + 1;
    }
    square->test_size--;

    if (square->test_size > square->size) {
        square->size = square->test_size;
        square->rows = bsq->rows;
        square->cols = bsq->cols;
    }
}

void find_biggest_square(char **tab, t_bsq *bsq, t_square *square)
{
    if (tab[bsq->rows][bsq->cols] == 'o'
        && bsq->cols != bsq->original_cols - 1) {
        bsq->cols++;
    } else if (tab[bsq->rows][bsq->cols] == '.'
        && bsq->cols == bsq->original_cols - 1) {
        test_biggest_square(tab, bsq, square);
        bsq->rows++;
        bsq->cols = 0;
    } else if (bsq->cols == bsq->original_cols - 1) {
        bsq->rows++;
        bsq->cols = 0;
    } else if (tab[bsq->rows][bsq->cols]  == '.') {
        test_biggest_square(tab, bsq, square);
        bsq->cols++;
    }
    bsq->i++;
}

char **resolve_map(char **tab, int nb_rows, int nb_cols)
{
    t_bsq *bsq = malloc(sizeof(t_bsq));
    t_square *square = malloc(sizeof(t_square));

    bsq->original_rows = nb_rows;
    bsq->original_cols = nb_cols;
    bsq->i = 0;
    bsq->rows = 0;
    bsq->cols = 0;
    square->size = 0;
    square->test_size = 0;
    square->rows = 0;
    square->cols = 0;

    while (bsq->i < (bsq->original_rows) * (bsq->original_cols)) {
        find_biggest_square(tab, bsq, square);
    }
    replace_map_solve(tab, square);
    display_map_solve(tab, bsq);
    return 0;
}
