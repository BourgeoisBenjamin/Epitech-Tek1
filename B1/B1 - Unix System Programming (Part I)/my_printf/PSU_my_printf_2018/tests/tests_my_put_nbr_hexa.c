/*
** EPITECH PROJECT, 2018
** my_printf
** File description:
** Unit Tests Criterion for the my_put_nbr_hexa.c
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include <my_printf.h>

Test(my_put_nbr_hexa, display_correct_0, .init = redirect_all_std)
{
    my_put_nbr_hexa(43567877);
    cr_assert_stdout_eq_str("298cb05");
}

Test(my_put_nbr_hexa, display_correct_1, .init = redirect_all_std)
{
    my_put_nbr_hexa(4);
    cr_assert_stdout_eq_str("4");
}

Test(my_put_nbr_hexa, display_correct_2, .init = redirect_all_std)
{
    my_put_nbr_hexa(0);
    cr_assert_stdout_eq_str("0");
}

Test(my_put_nbr_hexa, display_correct_3, .init = redirect_all_std)
{
    my_put_nbr_hexa(43);
    cr_assert_stdout_eq_str("2b");
}

Test(my_put_nbr_hexa, display_correct_4, .init = redirect_all_std)
{
    my_put_nbr_hexa(15);
    cr_assert_stdout_eq_str("f");
}