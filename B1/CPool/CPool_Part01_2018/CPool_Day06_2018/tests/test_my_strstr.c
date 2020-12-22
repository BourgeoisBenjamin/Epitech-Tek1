/*
** EPITECH PROJECT, 2018
** test_mystrstr.c
** File description:
** Test of Task04 of Pool Day06
*/

#include <criterion/criterion.h>

char *my_strstr(char *str, char const *to_find);

Test(my_strstr, test_00)
{
    char *test = my_strdup("Hello World\n");
    cr_assert_str_eq(my_strstr(test, "Wo"), "World\n");
    free(test);
}

Test(my_strstr, test_01)
{
    char *test = my_strdup("BONJouR\n");
    cr_assert_eq(my_strstr(test, "test"), NULL);
    free(test);
}

Test(my_strstr, test_02)
{
    char *test = my_strdup("un test");
    cr_assert_str_eq(my_strstr(test, "un test"), "un test");
    free(test);
}

Test(my_strstr, test_03)
{
    char *test = my_strdup("+56");
    cr_assert_str_eq(my_strstr(test, "6"), "6");
    free(test);
}

Test(my_strstr, test_04)
{
    char *test = my_strdup("test");
    cr_assert_str_eq(my_strstr(test, ""), "test");
    free(test);
}
