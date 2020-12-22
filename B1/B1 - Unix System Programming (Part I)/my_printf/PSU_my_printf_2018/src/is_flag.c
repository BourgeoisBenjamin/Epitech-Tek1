/*
** EPITECH PROJECT, 2018
** my_printf
** File description:
** is_flag
*/

#include <my_printf.h>

int is_flag(char f)
{
    if (f == 'i' || f == 'd' || f == 'c' || f == 's'
        || f == 'p' || f == 'x' || f == 'X' || f == 'o'
        || f == 'b' || f == 'S' || f == 'u' || f == '%')
        return 1;
    return 0;
}
