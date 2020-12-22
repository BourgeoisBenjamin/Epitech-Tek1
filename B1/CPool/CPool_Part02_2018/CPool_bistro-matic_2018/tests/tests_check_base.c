/*
** EPITECH PROJECT, 2018
** Unit Test eval_expr.c
** File description:
** Unit Tests Criterion for the eval_expr.c
*/

#include <criterion/criterion.h>
#include <my.h>
#include <bistromatic.h>

Test(check_base, test0)
{
    cr_expect_eq(check_base("1"), 84);
}

Test(check_base, test1)
{
    cr_expect_eq(check_base("hui"), 0);
}

Test(check_base, test2)
{
    cr_expect_eq(check_base(""), 84);
}

Test(check_base, test3)
{
    cr_expect_eq(check_base("45678"), 0);
}
