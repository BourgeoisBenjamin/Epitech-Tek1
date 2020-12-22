/*
** EPITECH PROJECT, 2018
** test_my_strncpy.c
** File description:
** Task02.5 of Pool Day06
*/

#include <criterion/criterion.h>

char *my_strncpy(char *dest, char const *src, int n);

Test(my_strncpy, test_00)
{
    char *test = malloc(sizeof(char) * 10);
    cr_assert_str_eq(my_strncpy(test, "Hello", 3), "Hel");
    free(test);
}

Test(my_strncpy, test_01)
{
    char *test = malloc(sizeof(char) * 10);
    test[0] = 'A';
    cr_assert_str_eq(my_strncpy(test, "   \n", 4), "   \n");
    free(test);
}

Test(my_strncpy, test_02)
{
    char *test = malloc(sizeof(char) * 10);
    cr_assert_str_eq(my_strncpy(test, "123(_)", 10), "123(_)");
    free(test);
}

Test(my_strncpy, test_03)
{
    char *test = malloc(sizeof(char) * 10);
    cr_assert_str_eq(my_strncpy(test, "", 0), "");
    free(test);
}

Test(my_strncpy, test_04)
{
    char *test = malloc(sizeof(char) * 10);
    cr_assert_str_eq(my_strncpy(test, "Hello\t", 6), "Hello\t");
    free(test);
}
