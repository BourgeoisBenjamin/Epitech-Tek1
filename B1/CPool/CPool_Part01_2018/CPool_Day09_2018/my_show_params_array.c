/*
** EPITECH PROJECT, 2018
** my_show_params_array.c
** File description:
** Task 04 of Pool Day09
*/

#include <my.h>

int my_show_params_array(struct info_param const *par)
{
    for (int i = 0; par[i].str != '0'; i++) {
        my_put_nbr(par[i].length);
        my_putchar('\n');
        my_putstr(par[i].str);
        my_putchar('\n');
        my_putstr(par[i].copy);
        my_putchar('\n');
        my_show_word_array(par[i].word_array);
        my_putchar('\n');
    }
    return 0;
}
