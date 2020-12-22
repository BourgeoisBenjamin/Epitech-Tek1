/*
** EPITECH PROJECT, 2018
** PARSE EXPRESSION
** File description:
** Parsing expression given as string
*/

#include <my.h>
#include <stdlib.h>

char *replace_spaces(char const *str)
{
    int i = 0;
    int j = 0;
    char *res = malloc(sizeof(char) * (my_strlen(str) + 1));

    while (str[i]) {
        if (str[i] == ' ')
            i++;
        else {
            res[j] = str[i];
            i++;
            j++;
        }
    }
    res[j] = '\0';
    return (res);
}

int is_parenthesis(char c)
{
    if (c == '(')
        return (1);
    else if (c == ')')
        return (2);
    else
        return (0);
}
