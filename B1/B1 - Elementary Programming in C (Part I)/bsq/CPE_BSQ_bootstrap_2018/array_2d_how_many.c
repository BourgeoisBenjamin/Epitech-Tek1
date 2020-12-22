/*
** EPITECH PROJECT, 2018
** Bootstrap BSQ
** File description:
** array_2d_how_many
*/

int array_2d_how_many(int **arr, int nb_rows, int nb_cols, int number)
{
    int result = 0;

    for (int row = 0; row < nb_rows; row++)
        for (int cols = 0; cols < nb_cols; cols++)
            if (arr[row][cols] == number)
                result++;

    return result;
}
