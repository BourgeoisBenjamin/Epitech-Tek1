/*
** EPITECH PROJECT, 2018
** 104intersection
** File description:
** my_str_isnum.c
*/

#include <intersection.h>

int my_str_isnum(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if ((('0' <= str[i]) && (str[i] <= '9')) || str[i] == '-') {
            i++;
        } else {
            return 0;
        }
    }
    return 1;
}