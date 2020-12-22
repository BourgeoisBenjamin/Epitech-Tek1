/*
** EPITECH PROJECT, 2018
** test_my_strcpy
** File description:
** Test of Task 08 of Pool Day06
*/

#include <criterion/criterion.h>

char *my_strlowcase(char *str);

Test(my_strlowcase, test_00)
{
    char *test = my_strdup("Hello");
    cr_assert_str_eq(my_strlowcase(test), "hello");
    free(test);
}

Test(my_strlowcase, test_01)
{
    char *test = my_strdup("BONJouR\n");
    cr_assert_str_eq(my_strlowcase(test), "bonjour\n");
    free(test);
}

Test(my_strlowcase, test_02)
{
    char *test = my_strdup("123 ONe TesT");
    cr_assert_str_eq(my_strlowcase(test), "123 one test");
    free(test);
}

Test(my_strlowcase, test_03)
{
    char *test = my_strdup("+56\t");
    cr_assert_str_eq(my_strlowcase(test), "+56\t");
    free(test);
}

Test(my_strlowcase, test_04)
{
    char *test = my_strdup("");
    cr_assert_str_eq(my_strlowcase(test), "");
    free(test);
}
