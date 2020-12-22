/*
** EPITECH PROJECT, 2018
** COUNT PARENTH
** File description:
** Returns syntax error if parentheses are going crazy
*/

#include <stdlib.h>
#include "my.h"
#include "bistromatic.h"

int count_parenth(char *expr)
{
    int open = 0;
    int close = 0;
    
    while (*expr != '\0') {
        if (*expr == '(')
            open++;
        else if (*expr == ')')
            close++;
        expr++;
    }
    if (open != close) {
        my_putstr(SYNTAX_ERROR_MSG);
        exit(84);
    }
    return (0);
}
