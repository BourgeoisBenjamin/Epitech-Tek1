/*
** EPITECH PROJECT, 2018
** BSQ
** File description:
** Unit Tests Criterion for the get_nb_cols.c
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include <bsq.h>

Test(get_nb_cols, return_10)
{
    cr_expect_eq(get_nb_cols("azert\nazertyuiop\n"), 10);
}

Test(get_nb_cols, return_0)
{
    cr_expect_eq(get_nb_cols("azert\n\n"), 0);
}

Test(get_nb_cols, return_0_1)
{
    cr_expect_eq(get_nb_cols("\n\n\n"), 0);
}

Test(get_nb_cols, return_1)
{
    cr_expect_eq(get_nb_cols("123\n.\n"), 1);
}

Test(get_nb_cols, return_33)
{
    cr_expect_eq(get_nb_cols("......o...\nooooooooooooooooooooooooo\n"), 25);
}