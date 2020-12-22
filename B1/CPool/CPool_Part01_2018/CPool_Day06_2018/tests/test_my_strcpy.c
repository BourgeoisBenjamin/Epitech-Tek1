/*
** EPITECH PROJECT, 2018
** test_my_strcpy
** File description:
** Task 01.5 of Pool Day06
*/

#include <criterion/criterion.h>

char *my_strcpy(char *dest, char const *src);

Test(my_strcpy, test_00)
{
    char *test = malloc(sizeof(char) * 10);
    cr_assert_str_eq(my_strcpy(test, "Hello"), "Hello");
    free(test);
}

Test(my_strcpy, test_01)
{
    char *test = malloc(sizeof(char) * 10);
    cr_assert_str_eq(my_strcpy(test, "   \n"), "   \n");
    free(test);
}

Test(my_strcpy, test_02)
{
    char *test = malloc(sizeof(char) * 10);
    cr_assert_str_eq(my_strcpy(test, "123(_)"), "123(_)");
    free(test);
}

Test(my_strcpy, test_03)
{
    char *test = malloc(sizeof(char) * 10);
    cr_assert_str_eq(my_strcpy(test, ""), "");
    free(test);
}

Test(my_strcpy, test_04)
{
    char *test = malloc(sizeof(char) * 10);
    cr_assert_str_eq(my_strcpy(test, "Hello\t"), "Hello\t");
    free(test);
}
