/*
** EPITECH PROJECT, 2018
** Unit Test sum_stdarg.c
** File description:
** Unit Tests Criterion for the sum_stdarg.c
*/

#include <criterion/criterion.h>

int sum_stdarg(int i, int nb, ...);

Test(sum_stdarg, return_correct_when_i_is_zero)
{
    int ret = sum_stdarg(0, 3, 21, 25, -4);
    cr_assert_eq(ret, 42);
}

Test(sum_stdarg, return_correct_when_i_is_zero_1)
{
    int ret = sum_stdarg(0, 14, 45, 96, 8, -34, 97, 3, -68, 89, 98,
                         1, 45, 456, 13, 89);
    cr_assert_eq(ret, 938);
}

Test(sum_stdarg, return_correct_when_i_is_zero_2)
{
    int ret = sum_stdarg(0, 14, 45, 96, 8, -34, 97, 3, -680, 89, 98,
                         1, 45, 456, 13, 89);
    cr_assert_eq(ret, 326);
}

Test(sum_stdarg, return_correct_when_i_is_one_1)
{
    int ret = sum_stdarg(1, 4, "banane", "lol", "z", "");
    cr_assert_eq(ret, 10);
}

Test(sum_stdarg, return_correct_when_i_is_one_2)
{
    int ret = sum_stdarg(1, 0);
    cr_assert_eq(ret, 0);
}
