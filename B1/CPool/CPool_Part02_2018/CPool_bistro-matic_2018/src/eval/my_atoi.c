/*
** EPITECH PROJECT, 2018
** Bistro-Matic Project
** File description:
** My_atoi.c for bistro-matic function
*/

#include <stdio.h>

int my_atoi(char const *str)
{
    int res = 0;
    int sign = 1;
    int i = 0;

    if (str[i] == '-') {
        sign = -1;
        i++;
    }

    for (; str[i] != '\0'; i++) {
        res = res * 10 + str[i] - '0';
    }

    return (sign*res);
}
