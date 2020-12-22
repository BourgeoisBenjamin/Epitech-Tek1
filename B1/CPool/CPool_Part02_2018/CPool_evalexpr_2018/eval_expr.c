/*
** EPITECH PROJECT, 2018
** EVAL EXPR
** File description:
** Shunting yard algorithm application
*/

#include <my.h>
#include <eval_expr.h>
#include <stdlib.h>

int eval_expr(char const *str)
{
    char *expr = my_strdup(replace_spaces(str));

    return (parse_simple_op(&expr));
}
