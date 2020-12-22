/*
** EPITECH PROJECT, 2018
** EVAL EXPR
** File description:
** Shunting yard algorithm application
*/

#include "my.h"
#include "eval_expr.h"
#include "bistromatic.h"
#include <stdlib.h>

char *eval_expr(char *expr, int size)
{
    if (size != my_strlen(expr))
        return (ERROR_MSG);
    char *str = my_strdup(replace_spaces(expr));
    int res = parse_simple_op(&expr);
    str = my_itoa(res);
    return (str);
}
