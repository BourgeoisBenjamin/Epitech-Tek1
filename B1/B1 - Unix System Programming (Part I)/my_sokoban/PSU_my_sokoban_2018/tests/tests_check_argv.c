/*
** EPITECH PROJECT, 2018
** my_sokoban
** File description:
** tests_check_argv
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include <sokoban.h>

Test(sokoban, check_argv, .exit_code = 84)
{
    char *temp[] = {"", ""};
    check_argv(4, temp);
}

Test(sokoban, check_argv_1, .exit_code = 84)
{
    char *temp[] = {"", ""};
    check_argv(10, temp);
}

Test(sokoban, check_argv_2, .exit_code = 84)
{
    char *temp[] = {"", ""};
    check_argv(1, temp);
}

Test(sokoban, check_argv_3)
{
    char *temp[] = {"", ""};
    cr_expect_eq(check_argv(2, temp), 0);
}

Test(sokoban, check_argv_4, .exit_code = 84)
{
    char *temp[] = {"", "-h"};
    check_argv(2, temp);
}