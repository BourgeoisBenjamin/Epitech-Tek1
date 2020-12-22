/*
** EPITECH PROJECT, 2018
** my_pushswap
** File description:
** swap_elem.c
*/

#include <pushswap.h>

void swap_elem(int *array, int index1, int index2)
{
    int temp = array[index1];
    array[index1] = array[index2];
    array[index2] = temp;
}