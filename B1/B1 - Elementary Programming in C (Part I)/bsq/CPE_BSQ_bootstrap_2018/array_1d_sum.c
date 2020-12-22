/*
** EPITECH PROJECT, 2018
** Bootstrap BSQ
** File description:
** array_1d_sum
*/

int my_put_nbr(int number);

int array_1d_sum(int const *arr, int size)
{
    int result = 0;

    for (int i = 0; i < size; i++) {
        result = result + arr[i];
    }
    my_put_nbr(result);
    return result;
}
