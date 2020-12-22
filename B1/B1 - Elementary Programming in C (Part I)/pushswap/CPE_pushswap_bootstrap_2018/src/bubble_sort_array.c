/*
** EPITECH PROJECT, 2018
** my_pushswap
** File description:
** bubble_sort_array.c
*/

#include <pushswap.h>

void if_sup(int *array, int i, int *sort_good)
{
    if (array[i] > array[i + 1]) {
        swap_elem(array, i, i + 1);
        *sort_good = 0;
    }
}

void bubble_sort_array(int *array, int size)
{
    int sort_good = 0;

    while (!sort_good) {
        sort_good = 1;
        for (int i = 0; i < size - 1; i++) {
            if_sup(array, i, &sort_good);
        }
    }
}