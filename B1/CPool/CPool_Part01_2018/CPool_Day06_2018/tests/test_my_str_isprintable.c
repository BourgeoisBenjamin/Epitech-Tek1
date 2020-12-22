/*
** EPITECH PROJECT, 2018
** test_my_strcpy
** File description:
** Test of Task 14 of Pool Day06
*/

#include <criterion/criterion.h>

int my_str_isprintable(char const *str);

Test(my_str_isprintable, test_00)
{
    cr_expect_eq(my_str_isprintable("AaZzEeRr\n"), 0);
}

Test(my_str_isprintable, test_01)
{
    cr_expect_eq(my_str_isprintable("azertyu\tio"), 0);
}

Test(my_str_isprintable, test_02)
{
    cr_expect_eq(my_str_isprintable("a"), 1);
}

Test(my_str_isprintable, test_03)
{
    cr_expect_eq(my_str_isprintable("111"), 1);
}

Test(my_str_isprintable, test_04)
{
    cr_expect_eq(my_str_isprintable("azerbr1"), 1);
}
