/*
** EPITECH PROJECT, 2018
** my_printf
** File description:
** Unit Tests Criterion for the my_putstr.c
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include <my_printf.h>

Test(my_putstr, display_correct_0, .init = redirect_all_std)
{
    my_putstr("Hello World\n");
    cr_assert_stdout_eq_str("Hello World\n");
}

Test(my_putstr, display_correct_1, .init = redirect_all_std)
{
    my_putstr("H");
    cr_assert_stdout_eq_str("H");
}

Test(my_putstr, display_correct_2, .init = redirect_all_std)
{
    my_putstr("0123456789");
    cr_assert_stdout_eq_str("0123456789");
}

Test(my_putstr, display_correct_3, .init = redirect_all_std)
{
    my_putstr("0\n");
    cr_assert_stdout_eq_str("0\n");
}

Test(my_putstr, display_correct_4, .init = redirect_all_std)
{
    my_putstr("Hel0\n");
    cr_assert_stdout_eq_str("Hel0\n");
}