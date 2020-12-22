/*
** EPITECH PROJECT, 2018
** lib
** File description:
** my_itoa.c
*/

#include <my.h>

char *my_itoa(int number)
{
    int len = 0;
    int tmp = number;
    char *str = NULL;

    while (tmp > 0) {
        tmp = tmp / 10;
        len++;
    }
    str = my_calloc(len + 1, sizeof(char));
    len--;
    while (len >= 0) {
        str[len] = number % 10  + '0';
        number = number / 10;
        len--;
    }
    return (str);
}
