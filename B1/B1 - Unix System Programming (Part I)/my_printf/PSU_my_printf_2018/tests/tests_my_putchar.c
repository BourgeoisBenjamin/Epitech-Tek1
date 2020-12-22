/*
** EPITECH PROJECT, 2018
** my_printf
** File description:
** Unit Tests Criterion for the my_putchar.c
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include <my_printf.h>

Test(my_putchar, display_correct_0, .init = redirect_all_std)
{
    my_putchar('c');
    cr_assert_stdout_eq_str("c");
}

Test(my_putchar, display_correct_1, .init = redirect_all_std)
{
    my_putchar('{');
    cr_assert_stdout_eq_str("{");
}

Test(my_putchar, display_correct_2, .init = redirect_all_std)
{
    my_putchar('5');
    cr_assert_stdout_eq_str("5");
}

Test(my_putchar, display_correct_3, .init = redirect_all_std)
{
    my_putchar(' ');
    cr_assert_stdout_eq_str(" ");
}

Test(my_putchar, display_correct_4, .init = redirect_all_std)
{
    my_putchar('%');
    cr_assert_stdout_eq_str("%");
}