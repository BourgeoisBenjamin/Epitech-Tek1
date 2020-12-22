/*
** EPITECH PROJECT, 2018
** my_printf
** File description:
** Unit Tests Criterion for the my_put_ptr_add.c
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include <my_printf.h>

Test(my_put_ptr_add, display_correct_0, .init = redirect_all_std)
{
    int *age = 19;
    my_printf("%p", age);
    cr_assert_stdout_eq_str("0x13");
}

Test(my_put_ptr_add, display_correct_1, .init = redirect_all_std)
{
    int *age =  197890;
    my_printf("%p", age);
    cr_assert_stdout_eq_str("0x30502");
}

Test(my_put_ptr_add, display_correct_2, .init = redirect_all_std)
{
    int *age = 32456789;
    my_printf("%p", age);
    cr_assert_stdout_eq_str("0x1ef4055");
}

Test(my_put_ptr_add, display_correct_3, .init = redirect_all_std)
{
    int *age = 0;
    my_printf("%p", age);
    cr_assert_stdout_eq_str("(nil)");
}