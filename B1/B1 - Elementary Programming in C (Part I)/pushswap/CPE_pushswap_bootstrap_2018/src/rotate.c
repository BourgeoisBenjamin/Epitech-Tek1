/*
** EPITECH PROJECT, 2018
** my_pushswap
** File description:
** rotate.c
*/

#include <pushswap.h>

void rotate_left(int *array, int size)
{
    int temp = array[0];

    for (int i = 0; i < size; i++) {
        array[i] = array[i + 1];
    }
    array[size - 1] = temp;
}

void rotate_right(int *array, int size)
{
    int temp = array[size - 1];

    for (int i = size - 1; i >= 0; i--) {
        array[i] = array[i - 1];
    }
    array[0] = temp;
}