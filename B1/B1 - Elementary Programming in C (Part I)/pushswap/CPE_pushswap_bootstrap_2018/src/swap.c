/*
** EPITECH PROJECT, 2018
** my_pushswap
** File description:
** swap.c
*/

#include <pushswap.h>

void swap(int *array)
{
    int temp = array[0];
    array[0] = array[1];
    array[1] = temp;
}