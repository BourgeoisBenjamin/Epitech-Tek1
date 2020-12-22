/*
** EPITECH PROJECT, 2018
** LINGO - UNIT TEST
** File description:
** Unit Tests for check_word
*/

#include "lingo.h"
#include "unittest.h"

Test(check_word, return_0)
{
    cr_expect_eq(check_line("azertyuoip"), 0);
}

Test(check_word, return_1)
{
    cr_expect_eq(check_line("azrett1"), -1);
}

Test(check_word, return_1_1)
{
    cr_expect_eq(check_line("azzzzee ez"), -1);
}

Test(check_word, return_1_2)
{
    cr_expect_eq(check_line("AZEE"), 0);
}
