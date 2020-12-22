/*
** EPITECH PROJECT, 2018
** Unit Test eval_expr.c
** File description:
** Unit Test Criterion for the eval_expr.c
*/

#include <criterion/criterion.h>
#include <my.h>
#include <eval_expr.h>

Test(replace_spaces, test1)
{
    cr_assert_str_eq(replace_spaces("Hello How Are You"), "HelloHowAreYou");
}

Test(replace_spaces, test2)
{
    cr_assert_str_eq(replace_spaces("56 + 78        /8"), "56+78/8");
}
