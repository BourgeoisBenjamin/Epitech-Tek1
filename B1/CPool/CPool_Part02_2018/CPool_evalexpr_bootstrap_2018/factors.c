/*
** EPITECH PROJECT, 2018
** summands.c
** File description:
** summands.c
*/

#include <my.h>

int number(char **str);

int summands(char **str)
{
    int sum = number(&str[0]);
    int i = 0;
    
    while (str[0][i] != '\0') {
        if (str[0][i] == '*')
            sum = sum * number(&str[0]);
        if (str[0][i] == '+')
            sum = sum + number(&str[0]);
        if (str[0][i] == '/')
            sum = sum / number(&str[0]);
        if (str[0][i] == '-')
            sum = sum + number(&str[0]);
    }
    return sum;
}
