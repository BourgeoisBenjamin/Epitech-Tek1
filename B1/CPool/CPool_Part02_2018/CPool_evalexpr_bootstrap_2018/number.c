/*
** EPITECH PROJECT, 2018
** number
** File description:
** Part 2 of Bootstrap EvalExpr
*/

#include <my.h>

int number(char **str)
{
    int i = 0;
    int minus = 1;
    int result = 0;
  
    for (i = 0; str[0][i] == '-' || str[0][i] == '+' || str[0][i] == ' ' || str[0][i] == '*' || str[0][i] == '/'; i++) {
        if (str[0][i] == '-')
            minus = minus * (-1);
    }
    while (str[0][i] >= '0' && str[0][i] <= '9') {
        result = result * 10;
        result = result + (str[0][i] - '0');
        i++;
    }
    (*str) = (*str) + i;
    result = result * minus;
    return result;
}
