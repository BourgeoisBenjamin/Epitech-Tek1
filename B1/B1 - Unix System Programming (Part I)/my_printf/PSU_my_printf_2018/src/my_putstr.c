/*
** EPITECH PROJECT, 2018
** my_printf
** File description:
** my_putstr
*/

#include <my_printf.h>

int my_putstr(char const *str)
{
    int temp = 0;
    while (str[temp] != '\0') {
        my_putchar(str[temp]);
        temp++;
    }
    return 0;
}
