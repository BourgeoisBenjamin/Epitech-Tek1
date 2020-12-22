/*
** EPITECH PROJECT, 2018
** test_my_strcpy
** File description:
** Task 01.5 of Pool Day06
*/

#include <criterion/criterion.h>

char *my_revstr(char *str);

Test(my_revstr, test_00)
{
    char *test = my_strdup("Hello");
    cr_assert_str_eq(my_revstr(test), "olleH");
    free(test);
}

Test(my_revstr, test_01)
{
    char *test = my_strdup("BONJouR\n");
    cr_assert_str_eq(my_revstr(test), "\nRuoJNOB");
    free(test);
}

Test(my_revstr, test_02)
{
    char *test = my_strdup("un test");
    cr_assert_str_eq(my_revstr(test), "tset nu");
    free(test);
}

Test(my_revstr, test_03)
{
    char *test = my_strdup("+56");
    cr_assert_str_eq(my_revstr(test), "65+");
    free(test);
}

Test(my_revstr, test_04)
{
    char *test = my_strdup("");
    cr_assert_str_eq(my_revstr(test), "");
    free(test);
}
