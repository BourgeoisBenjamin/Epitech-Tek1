/*
** EPITECH PROJECT, 2018
** Unit_test eval_expr.c
** File description:
** Unit Tests Criterion for the eval_expr.c
*/

#include <criterion/criterion.h>
#include <my.h>
#include <eval_expr.h>

Test(number, test0)
{
    char *str = "2037";

    cr_expect_eq(number(&str), 2037);
}

Test(number, test1)
{
    char *str = "0";

    cr_expect_eq(number(&str), 0);
}
