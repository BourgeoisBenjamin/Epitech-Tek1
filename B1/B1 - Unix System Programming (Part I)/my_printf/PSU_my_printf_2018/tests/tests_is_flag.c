/*
** EPITECH PROJECT, 2018
** my_printf
** File description:
** Unit Tests Criterion for the is_flag.c
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include <my_printf.h>

Test(is_flag, return_1)
{
    cr_expect_eq(is_flag('c'), 1);
}

Test(is_flag, return_1_1)
{
    cr_expect_eq(is_flag('X'), 1);
}

Test(is_flag, return_0)
{
    cr_expect_eq(is_flag('q'), 0);
}

Test(is_flag, return_0_1)
{
    cr_expect_eq(is_flag('%'), 1);
}

Test(is_flag, return_0_2)
{
    cr_expect_eq(is_flag(' '), 0);
}