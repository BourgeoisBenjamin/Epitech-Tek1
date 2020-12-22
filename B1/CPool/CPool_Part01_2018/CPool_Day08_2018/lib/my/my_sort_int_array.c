/*
** EPITECH PROJECT, 2018
** my_sort_in_array.c
** File description:
** my_sort_int_array.c
*/

void my_sort_int_array(int *tab, int size)
{
    int temp;

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - 1; j++) {
            if (tab[j] > tab[j + 1]) {
                temp = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = temp;
            }
        }
    }
}