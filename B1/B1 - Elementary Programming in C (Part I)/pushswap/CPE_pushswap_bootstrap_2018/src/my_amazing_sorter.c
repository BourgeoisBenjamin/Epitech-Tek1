/*
** EPITECH PROJECT, 2018
** my_pushswap
** File description:
** my_amazing_sorter.c
*/

#include <pushswap.h>

int is_sort(int *array, int size)
{
    for (int i = 0; i < size; i++) {
        if (array[i + 1] && array[i] > array[i + 1])
            return 0;
    }
    return 1;
}

int get_next(int *array, int size)
{
    for (int i = 0; i < size; i++) {
        if (array[i] > array[i + 1])
            return i;
    }
    return 0;
}

void my_amazing_sorter(int *array, int size)
{
    int next = 0;
    int prev = 0;

    while (!is_sort(array, size)) {
        next = get_next(array, size);
        prev = next;
        while (next > 0) {
            my_printf("left\n");
            rotate_left(array, size);
            next--;
        }
        if (array[0] > array[1]){
            my_printf("swap\n");
            swap(array);
        }
        while (prev > 0) {
            my_printf("right\n");
            rotate_right(array, size);
            prev--;
        }
        my_printf("%i %i %i %i %i %i\n", array[0], array[1], array[2], array[3], array[4], array[5]);
    }
}