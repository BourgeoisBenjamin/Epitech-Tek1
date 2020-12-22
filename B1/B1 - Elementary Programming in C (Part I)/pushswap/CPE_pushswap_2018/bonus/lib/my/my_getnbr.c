/*
** EPITECH PROJECT, 2018
** my_getnbr.c
** File description:
** Task05 of Pool Day04
*/

#include <my.h>

int my_getnbr(char const *str)
{
    int i = 0;
    int number = 0;
    int neg = 1;
    int j = 0;

    while (str[i] == '-' || str[i] == '+') {
        if (str[i] == '-')
            neg = neg * -1;
        i++;
        j++;
    }
    while (str[j] != '\0') {
        while ('0' <= str[j] && str[j] <= '9') {
            number = number * 10;
            number = number + str[j] - '0';
            j++;
        }
        return (number * neg);
    }
    return 0;
}