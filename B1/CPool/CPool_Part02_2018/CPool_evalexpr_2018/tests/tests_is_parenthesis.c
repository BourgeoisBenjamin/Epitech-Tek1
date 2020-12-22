/*
** EPITECH PROJECT, 2018
** Unit Test eval_expr.c
** File description:
** Unit Tests Criterion for the eval_expr.c
*/

#include <criterion/criterion.h>
#include <my.h>
#include <eval_expr.h>

Test(is_parenthesis, test0)
{
    cr_expect_eq(is_parenthesis('('), 1);
}

Test(is_parenthesis, test1)
{
    cr_expect_eq(is_parenthesis(')'), 2);
}

Test(is_parenthesis, test2)
{
    cr_expect_eq(is_parenthesis('a'), 0);
}
