/*
** EPITECH PROJECT, 2018
** NAVY - UNIT TEST
** File description:
** Unit Tests for valid_line
*/

#include "navy.h"
#include "unittest.h"

Test(valid_line, return_1)
{
    char *line = "2:A1:A2";
    cr_expect_eq(valid_line(line), 0);
}

Test(valid_line, return_1_1)
{
    char *line = "aabbccz";
    cr_expect_eq(valid_line(line), -1);
}

Test(valid_line, return_0)
{
    char *line = "2:C1:D1";
    cr_expect_eq(valid_line(line), 0);
}

Test(valid_line, return_0_1)
{
    char *line = "0 A1 A1";
    cr_expect_eq(valid_line(line), -1);
}

Test(valid_line, return_0_2)
{
    char *line = "a:A1:A3";
    cr_expect_eq(valid_line(line), -1);
}
