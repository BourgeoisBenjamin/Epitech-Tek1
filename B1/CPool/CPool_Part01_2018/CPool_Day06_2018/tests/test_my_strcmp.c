/*
** EPITECH PROJECT, 2018
** test_my_strcmp.c
** File description:
** Test of Task05 of Pool Day06
*/

#include <criterion/criterion.h>

int my_strcmp(char const *s1, char const *s2);

Test(my_strcmp, test_00)
{
    cr_expect_eq(my_strcmp("abcd", "bacd"), -1);
}

Test(my_strcmp, test_01)
{
    cr_expect_eq(my_strcmp("Hello World\t\n", "Hello World\t\n"), 0);
}

Test(my_strcmp, test_02)
{
    cr_expect_eq(my_strcmp("    ", "     "), 0);
}

Test(my_strcmp, test_03)
{
    cr_expect_eq(my_strcmp("bacd", "abcd"), 1);
}

Test(my_strcmp, test_04)
{
    cr_expect_eq(my_strcmp("djizad123", "djizad123"), 0);
}
