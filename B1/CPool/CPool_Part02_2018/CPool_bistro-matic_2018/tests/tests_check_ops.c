/*
** EPITECH PROJECT, 2018
** Unit Test eval_expr.c
** File description:
** Unit Tests Criterion for the eval_expr.c
*/

#include <criterion/criterion.h>
#include <my.h>
#include <bistromatic.h>

Test(check_ops, test0)
{
    cr_expect_eq(check_ops("*%+-/+=/"), 84);
}

Test(check_ops, test1)
{
    cr_expect_eq(check_ops("hui"), 84);
}

Test(check_ops, test2)
{
    cr_expect_eq(check_ops(""), 84);
}

Test(check_ops, test3)
{
    cr_expect_eq(check_ops("+=-/%*/"), 0);
}
