/*
** EPITECH PROJECT, 2018
** tests_match.c
** File description:
** Units-test for match.c
*/

#include <criterion/criterion.h>

Test(match1, strings_unmatch)
{
    cr_expect(match("Biotech", "Biotech") == 1, "not different");
}

Test(match2, strings_unmatch)
{
    cr_expect(match("Biotech", "biotech") == 0, "Uppercase");
}

Test(match3, strings_match_with_star)
{
    cr_expect(match("Biotech", "Bi*tech") == 1, "Good");
}

Test(match4, empty_strings)
{
    cr_expect(match("", "") == 1, "Good");
}

Test(match5, multiple_stars)
{
    cr_expect(match("Biotech", "Bi**") == 1, "Good");
}

Test(match6, error_with_star)
{
    cr_expect(match("Biotech", "Bi**g") == 0, "False");
}
