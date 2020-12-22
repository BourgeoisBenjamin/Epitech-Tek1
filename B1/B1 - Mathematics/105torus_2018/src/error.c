/*
** EPITECH PROJECT, 2019
** 105torus
** File description:
** error
*/

#include "torus.h"

int my_str_isnum(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if ((('0' <= str[i]) && (str[i] <= '9')) || str[i] == '-' || str[i] == '+' || str[i] == '.') {
            i++;
        } else {
            return 0;
        }
    }
    return 1;
}

int check_arg(char **argv)
{
    if (1 > atoi(argv[1]) || atoi(argv[1]) > 3) {
        printf("Wrong usage. Bad argument Enter ./104intersection -h to see usage\n");
        return 1;
    }
    if (atoi(argv[7]) < 0 || !(my_str_isnum(argv[7]))) {
        printf("Wrong usage. Bad argument Enter ./104intersection -h to see usage\n");
        return 1;
    }
    for (int i = 2; i < 7; i++) {
        if (!(my_str_isnum(argv[i]))) {
            printf("Only integers for the coefficients. Bad argument Enter ./104intersection -h to see usage\n");
            return 1;
        }
    }
    return 0;
}
