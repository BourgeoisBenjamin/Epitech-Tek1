/*
** EPITECH PROJECT, 2018
** test_my_str_isalpha
** File description:
** Test of Task 10 of Pool Day06
*/

#include <criterion/criterion.h>

int my_str_isalpha(char const *str);

Test(my_str_isalpha, test_00)
{
    cr_expect_eq(my_str_isalpha("AaZzEeRr"), 1);
}

Test(my_str_isalpha, test_01)
{
    cr_expect_eq(my_str_isalpha("azertyuio1"), 0);
}

Test(my_str_isalpha, test_02)
{
    cr_expect_eq(my_str_isalpha("a"), 1);
}

Test(my_str_isalpha, test_03)
{
    cr_expect_eq(my_str_isalpha("ab,be"), 0);
}

Test(my_str_isalpha, test_04)
{
    cr_expect_eq(my_str_isalpha("azer br"), 0);
}
