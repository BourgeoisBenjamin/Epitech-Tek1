/*
** EPITECH PROJECT, 2018
** Bootstrap BSQ
** File description:
** array_2d_sum
*/

int array_2d_sum(int **arr, int nb_rows, int nb_cols)
{
    int result = 0;

    for (int row = 0; row < nb_rows; row++) {
        for (int cols = 0; cols < nb_cols; cols++)
            result = result + arr[row][cols];
    }

    return result;
}
