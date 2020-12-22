/*
** EPITECH PROJECT, 2018
** lib
** File description:
** my_isdigit.c
*/

#include <my.h>

int my_isdigit(char c)
{
    if ('0' <= c && c <= '9')
        return 1;
    else
        return 0;
}
