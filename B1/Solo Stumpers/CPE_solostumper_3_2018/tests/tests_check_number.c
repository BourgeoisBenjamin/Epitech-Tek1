/*
** EPITECH PROJECT, 2018
** FAZZBIZZ
** File description:
** Unit Tests Criterion
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "fazzbizz.h"

Test(check_number, return_1)
{
    cr_expect_eq(check_number("45b"), 1);
}

Test(check_number, return_1_1)
{
    cr_expect_eq(check_number("'abcd'"), 1);
}

Test(check_number, return_0)
{
    cr_expect_eq(check_number("20"), 0);
}

Test(check_number, return_0_1)
{
    cr_expect_eq(check_number("30"), 0);
}

Test(check_number, return_1_2)
{
    cr_expect_eq(check_number("  "), 1);
}
