/*
** EPITECH PROJECT, 2018
** tests_infinadd.c
** File description:
** Unit_test for my infinadd Project
*/

#include <criterion/criterion.h>
#include <my.h>

int infinadd(char const *s1, char const *s2);

Test(infinadd_test0, Test0)
{
    cr_assert_str_eq(infinadd("0", "0"), "0");
}

Test(infinadd_test0_1, Test0_1)
{
    cr_assert_str_eq(infinadd("", ""), "");
}

Test(infinadd_test1, Test1)
{
    cr_assert_str_eq(infinadd("34", "42"), "76");
}

Test(infinadd_test2, Test2)
{
    cr_assert_str_eq(infinadd("657", "789627"), "790284");
}

Test(infinadd_test3, Test3)
{
    cr_assert_str_eq(infinadd("9", "9"), "18");
}

Test(infinadd_test4, Test4)
{
    cr_assert_str_eq(infinadd("20", "20"), "40");
}

Test(infinadd_test5, Test5)
{
    cr_assert_str_eq(infinadd("18", "3"), "21");
}

Test(infinadd_test6, Test6)
{
    cr_assert_str_eq(infinadd("221", "20"), "241");
}

Test(infinadd_test7, Test7)
{
    cr_assert_str_eq(infinadd("2", "1999"), "2001");
}

Test(infinadd_test8, Test8)
{
    cr_assert_str_eq(infinadd("15", "3"), "18");
}

Test(infinadd_test9, Test9)
{
    cr_assert_str_eq(infinadd("345678908765", "45678987"), "345724587752");
}

Test(infinadd_test10, Test10)
{
    cr_assert_str_eq(infinadd("1", "1"), "2");
}
