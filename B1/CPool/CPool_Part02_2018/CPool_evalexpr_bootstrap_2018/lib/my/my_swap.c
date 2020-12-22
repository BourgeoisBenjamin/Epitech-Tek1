/*
** EPITECH PROJECT, 2018
** my_swap.c
** File description:
** Task01 of Pool Day04
*/

void my_swap(int *a, int *b)
{
    int c = *a;
    *a = *b;
    *b = c;
}
