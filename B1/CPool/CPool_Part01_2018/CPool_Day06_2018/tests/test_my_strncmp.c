/*
** EPITECH PROJECT, 2018
** my_strncmp.c
** File description:
** Test of Task06 of Pool Day06
*/

#include <criterion/criterion.h>

int my_strncmp(char const *s1, char const *s2, int n);

Test(my_strncmp, test_00)
{
    cr_expect_eq(my_strncmp("abcd", "bacd", 2), -1);
}

Test(my_strncmp, test_01)
{
    cr_expect_eq(my_strncmp("Hello World\t\n", "Hello World\t\n", 5), 0);
}

Test(my_strncmp, test_02)
{
    cr_expect_eq(my_strncmp("    ", "     ", 7), 0);
}

Test(my_strncmp, test_03)
{
    cr_expect_eq(my_strncmp("bacd", "abcd", 4), 1);
}

Test(my_strncmp, test_04)
{
    cr_expect_eq(my_strncmp("djizad123", "djizad123", 6), 0);
}
