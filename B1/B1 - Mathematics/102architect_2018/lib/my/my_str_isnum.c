/*
** EPITECH PROJECT, 2018
** my_str_isnums.c
** File description:
** Task10 of Pool Day06
*/

#include <my.h>

int my_str_isnum(char const *str)
{

    int i = 0;

    for (; str[i] == '-'; i++);

    while (str[i] != '\0') {
        if (('0' <= str[i]) && (str[i] <= '9')) {
            return 1;
        } else {
            return 0;
        }
        i++;
    }
    return 1;
}