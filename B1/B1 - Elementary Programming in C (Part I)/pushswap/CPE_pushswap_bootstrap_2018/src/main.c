/*
** EPITECH PROJECT, 2018
** my_pushswap
** File description:
** main.c
*/

#include <pushswap.h>
#include <stdio.h>
int main(void)
{
    int array[] = { -100, 15, 8, 42, 4, 16, 23, -100, 4, 4, 4, 4, 9384, 398, 0, 0, 4, 4, 0, 0, -1, -1, -2394, 398402};
    int size = sizeof(array) / sizeof(*array);

    bubble_sort_array(array, size);

    for (int i = 0; i < size; i++) {
        printf("%i ", array[i]);
    }
}