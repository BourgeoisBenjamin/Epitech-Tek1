/*
** EPITECH PROJECT, 2018
** BSQ
** File description:
** Unit Test test_argc
*/

#include <bsq.h>
#include <criterion/criterion.h>
#include <criterion/redirect.h>

Test(test_argc, exit_code, .exit_code = 84)
{
    test_argc(4);
}

Test(test_argc, exit_code_1, .exit_code = 84)
{
    test_argc(1);
}

Test(test_argc, exit_code_2, .exit_code = 84)
{
    test_argc(10000000);
}

Test(test_argc, exit_code_3, .exit_code = 84)
{
    test_argc(3);
}

Test(test_argc, exit_code_4, .exit_code = 84)
{
    test_argc(-1);
}