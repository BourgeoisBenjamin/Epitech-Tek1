/*
** EPITECH PROJECT, 2018
** Unit Test eval_expr.c
** File description:
** Unit Tests Criterion for the eval_expr.c
*/

#include <criterion/criterion.h>
#include <my.h>
#include <eval_expr.h>

Test(parse_simple_op, test0)
{
    char *str = "8+8+67+98";
    cr_expect_eq(parse_simple_op(&str), 181);
}

Test(parse_simple_op, test1)
{
    char *str = "8+8+67+98/2+6*6-4%2";
    cr_expect_eq(parse_simple_op(&str), 168);
}

Test(parse_simple_op, test2)
{
    char *str = "8+8+67+98/2+6*6-4";
    cr_expect_eq(parse_simple_op(&str), 164);
}

Test(parse_simple_op, test3)
{
    char *str = "8+8+67+98*2";
    cr_expect_eq(parse_simple_op(&str), 279);
}
