/*
** EPITECH PROJECT, 2018
** test_my_str_isnum
** File description:
** Test of Task 12 of Pool Day06
*/

#include <criterion/criterion.h>

int my_str_isnum(char const *str);

Test(my_str_is_num, test_00)
{
    cr_expect_eq(my_str_is_num("1234567890"), 1);
}

Test(my_str_is_num, test_01)
{
    cr_expect_eq(my_str_is_num("12345678e"), 0);
}

Test(my_str_is_num, test_02)
{
    cr_expect_eq(my_str_is_num("-456"), 1);
}

Test(my_str_is_num, test_03)
{
    cr_expect_eq(my_str_is_num("45;67"), 0);
}

Test(my_str_is_num, test_04)
{
    cr_expect_eq(my_str_is_num("^"), 0);
}
