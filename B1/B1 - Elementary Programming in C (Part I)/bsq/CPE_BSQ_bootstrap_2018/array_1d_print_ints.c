/*
** EPITECH PROJECT, 2018
** Bootstrap BSQ
** File description:
** array_1d_print_ints
*/

int my_put_nbr(int nb);
void my_putchar(char c);

void array_1d_print_ints(int const *arr, int size)
{
    for (int i = 0; i < size; i++) {
        my_put_nbr(arr[i]);
        my_putchar('\n');
    }
}
