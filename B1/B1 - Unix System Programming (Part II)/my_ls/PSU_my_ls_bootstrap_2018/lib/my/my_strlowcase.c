/*
** EPITECH PROJECT, 2018
** my_strupcase.
** File description:
** Task08 of Pool Day06
*/

#include <my.h>

char *my_strlowcase(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if ('A' <= str[i] && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
        i++;
    }
    return str;
}
