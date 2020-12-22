/*
** EPITECH PROJECT, 2018
** test_my_strcpy
** File description:
** Test of Task 09 of Pool Day06
*/

#include <criterion/criterion.h>

char *my_strcapitalize(char *str);

Test(my_strcapitalize, test_00)
{
    char *test = my_strdup("Hello");
    cr_assert_str_eq(my_strcapitalize(test), "Hello");
    free(test);
}

Test(my_strcapitalize, test_01)
{
    char *test = my_strdup("BONJouR\n");
    cr_assert_str_eq(my_strcapitalize(test), "Bonjour\n");
    free(test);
}

Test(my_strcapitalize, test_02)
{
    char *test = my_strdup("un test");
    cr_assert_str_eq(my_strcapitalize(test), "Un Test");
    free(test);
}

Test(my_strcapitalize, test_03)
{
    char *test = my_strdup("+56");
    cr_assert_str_eq(my_strcapitalize(test), "+56");
    free(test);
}

Test(my_strcapitalize, test_04)
{
    char *test = my_strdup("");
    cr_assert_str_eq(my_strcapitalize(test), "");
    free(test);
}
