/*
** EPITECH PROJECT, 2018
** my_str_islower.c
** File description:
** Task 12 of Pool Day06
*/

#include <my.h>

int my_str_islower(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (('a' > str[i]) || (str[i] > 'z')) {
            return 0;
        }
        i++;
    }
    return 1;
}