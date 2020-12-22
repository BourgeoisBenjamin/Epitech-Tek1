/*
** EPITECH PROJECT, 2018
** NAVY - UNIT TEST
** File description:
** Unit Tests for check_line_position
*/

#include "navy.h"
#include "unittest.h"

Test(check_line_position, return_1)
{
    char *line = "3:A1:A3";
    cr_expect_eq(check_line_position(line), 0);
}

Test(check_line_position, return_1_1)
{
    char *line = "3:A1:A2";
    cr_expect_eq(check_line_position(line), -1);
}

Test(check_line_position, return_0)
{
    char *line = "3:C1:A1";
    cr_expect_eq(check_line_position(line), 0);
}

Test(check_line_position, return_0_1)
{
    char *line = "0:A1:A1";
    cr_expect_eq(check_line_position(line), -1);
}

Test(check_line_position, return_0_2)
{
    char *line = ":A1:A3";
    cr_expect_eq(check_line_position(line), -1);
}
