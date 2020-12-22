/*
** EPITECH PROJECT, 2018
** OPERATIONS
** File description:
** Add, sub, mul, div, modulo..
*/

#include <eval_expr.h>

int parse_parenth(char **expr)
{
    if (**expr >= '0' && **expr <= '9')
        return (number(expr));
    while (is_parenthesis(**expr) == 1) {
        (*expr)++;
        int res = parse_simple_op(expr);
        if (is_parenthesis(**expr) == 2)
            (*expr)++;
        return (res);
    }
    return (0);
}

int parse_adv_op(char **expr)
{
    int first = parse_parenth(expr);

    while (**expr == '*' || **expr == '/' || **expr == '%') {
        if (**expr == '*') {
            (*expr)++;
            int next = parse_parenth(expr);
            first = first * next;
        }
        else if (**expr == '/') {
            (*expr)++;
            int next = parse_parenth(expr);
            first = first / next;
        }
        else {
            (*expr)++;
            int next = parse_parenth(expr);
            first = first % next;
        }
    }
    return (first);
}

int parse_simple_op(char **expr)
{
    int first = parse_adv_op(expr);
    while (**expr == '+' || **expr == '-') {
        if (**expr == '+') {
            (*expr)++;
            int next = parse_adv_op(expr);
            first = first + next;
        }
        else if (**expr == '-') {
            (*expr)++;
            int next = parse_adv_op(expr);
            first = first - next;
        }
    }
    return (first);
}
