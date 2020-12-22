/*
** EPITECH PROJECT, 2018
** Unit_test eval_expr.c
** File description:
** Unit Tests Criterion for the eval_expr.c
*/

#include <criterion/criterion.h>
#include <my.h>
#include <bistromatic.h>

Test(my_atoi, test0)
{
    cr_expect_eq(my_atoi("2037"), 2037);
}

Test(my_atoi, test1)
{
    cr_expect_eq(my_atoi("0"), 0);
}

Test(my_atoi, test2)
{
    cr_expect_eq(my_atoi("-456789"), -456789);
}
