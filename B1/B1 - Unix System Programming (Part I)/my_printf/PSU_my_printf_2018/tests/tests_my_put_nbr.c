/*
** EPITECH PROJECT, 2018
** my_printf
** File description:
** Unit Tests Criterion for the my_put_nbr.c
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include <my_printf.h>

Test(my_put_nbr, display_correct_0, .init = redirect_all_std)
{
    my_put_nbr(43567877);
    cr_assert_stdout_eq_str("43567877");
}

Test(my_put_nbr, display_correct_1, .init = redirect_all_std)
{
    my_put_nbr(0);
    cr_assert_stdout_eq_str("0");
}

Test(my_put_nbr, display_correct_2, .init = redirect_all_std)
{
    my_put_nbr(-0);
    cr_assert_stdout_eq_str("0");
}

Test(my_put_nbr, display_correct_3, .init = redirect_all_std)
{
    my_put_nbr(-43567877);
    cr_assert_stdout_eq_str("-43567877");
}

Test(my_put_nbr, display_correct_4, .init = redirect_all_std)
{
    my_put_nbr(2147483647);
    cr_assert_stdout_eq_str("2147483647");
}

Test(my_put_nbr, display_correct_5, .init = redirect_all_std)
{
    my_put_nbr(-2147483648);
    cr_assert_stdout_eq_str("-2147483648");
}