/*
** EPITECH PROJECT, 2018
** Unit Test eval_expr.c
** File description:
** Unit Tests Criterion for the eval_expr.c
*/

#include <criterion/criterion.h>
#include <my.h>
#include <eval_expr.h>

Test(parse_adv_op, test0)
{
    char *str = "8*8";
    cr_expect_eq(parse_adv_op(&str), 64);
}

Test(parse_adv_op, test1)
{
    char *str = "8*8/2";
    cr_expect_eq(parse_adv_op(&str), 32);
}

Test(parse_adv_op, test2)
{
    char *str = "8*8/2*67";
    cr_expect_eq(parse_adv_op(&str), 2144);
}
