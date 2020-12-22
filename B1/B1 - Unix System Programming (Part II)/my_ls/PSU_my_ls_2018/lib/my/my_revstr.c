/*
** EPITECH PROJECT, 2018
** my_revstr.c
** File description:
** Task03 of PoolDay06
*/

#include <my.h>

char *my_revstr(char *str)
{
    int temp = 0;
    int i = 0;
    int j = my_strlen(str) - 1;

    while (i < j) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
    return str;
}