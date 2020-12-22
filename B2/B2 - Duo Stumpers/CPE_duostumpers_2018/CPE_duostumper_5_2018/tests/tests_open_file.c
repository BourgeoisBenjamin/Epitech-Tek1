/*
** EPITECH PROJECT, 2018
** LINGO - UNIT TEST
** File description:
** Unit Tests for open_file
*/

#include "lingo.h"
#include "unittest.h"

Test(open_file, return_0)
{
    char *argv[2] = {"./lingo", "Makefiles"};
    cr_expect_eq(open_file(2, argv), -1);
}

Test(open_file, return_1)
{
    char *argv[2] = {"./lingo", "Makefile"};
    cr_expect_eq(open_file(1, argv), -1);
}

Test(open_file, return_1_1)
{
    char *argv[2] = {"./lingo", "Makefile"};
    cr_expect_eq(open_file(3, argv), -1);
}

Test(open_file, return_1_2)
{
    char *argv[2] = {"./lingo", "../include"};
    cr_expect_eq(open_file(1, argv), -1);
}
