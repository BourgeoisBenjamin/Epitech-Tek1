/*
** EPITECH PROJECT, 2018
** my_getnbr.c
** File description:
** Task05 of Pool Day04
*/

#include <my.h>

void my_getnbr2(char const *str, int *number, int *j)
{
    if (47 < str[*j] && str[*j] < 58) {
        *number = *number * 10;
        *number = *number + str[*j] - 48;
    }
}

int my_getnbr(char const *str)
{
    int i = 0;
    int number = 0;
    int neg = 1;
    int j = 0;

    while (str[i] == 45 || str[i] == 43) {
        if (str[i] == 45) {
            neg = neg * -1;
        }
        i++;
    }
    while (str[j] != '\0') {
        while (47 < str[j] && str[j] < 58) {
            my_getnbr2(str, &number, &j);
            j++;
        }
        return (number * neg);
    }
    return 0;
}