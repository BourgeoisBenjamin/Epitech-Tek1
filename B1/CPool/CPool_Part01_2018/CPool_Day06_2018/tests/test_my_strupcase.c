/*
** EPITECH PROJECT, 2018
** test_my_strcpy
** File description:
** Test of Task 07 of Pool Day06
*/

#include <criterion/criterion.h>

char *my_strupcase(char *str);

Test(my_strupcase, test_00)
{
    char *test = my_strdup("Hello");
    cr_assert_str_eq(my_strupcase(test), "HELLO");
    free(test);
}

Test(my_strupcase, test_01)
{
    char *test = my_strdup("BONJouR\n");
    cr_assert_str_eq(my_strupcase(test), "BONJOUR\n");
    free(test);
}

Test(my_strupcase, test_02)
{
    char *test = my_strdup("123 ONe TesT");
    cr_assert_str_eq(my_strupcase(test), "123 ONE TEST");
    free(test);
}

Test(my_strupcase, test_03)
{
    char *test = my_strdup("+56\t");
    cr_assert_str_eq(my_strupcase(test), "+56\t");
    free(test);
}

Test(my_strupcase, test_04)
{
    char *test = my_strdup("");
    cr_assert_str_eq(my_strupcase(test), "");
    free(test);
}
