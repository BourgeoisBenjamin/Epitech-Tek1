/*
** EPITECH PROJECT, 2018
** my_show_word_array.c
** File description:
** Task 03 of Pool Day 08
*/

#include "my.h"

int my_show_word_array(char *const *tab)
{
    for (int i = 0; tab[i]; i++) {
        my_putstr(tab[i]);
        my_putchar('\n');
    }
    return 0;
}
