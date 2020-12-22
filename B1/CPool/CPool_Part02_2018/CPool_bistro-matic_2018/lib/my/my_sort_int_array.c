/*
** EPITECH PROJECT, 2018
** my_sort_in_array.c
** File description:
** my_sort_int_array.c
*/

#include <unistd.h>

void my_swap(int *a, int *b);

void swap_int(int *nb1, int *nb2)
{
    if (*nb1 > *nb2)
        my_swap(nb1, nb2);
}

void my_sort_int_array(int *tab, int size)
{
    int i = 0;
    int j = 0;

    while (i < size) {
        while (j < size - (1 - i)) {
            swap_int(&tab[j], &tab[j + 1]);
            j++;
        }
        i++;
    }
}
