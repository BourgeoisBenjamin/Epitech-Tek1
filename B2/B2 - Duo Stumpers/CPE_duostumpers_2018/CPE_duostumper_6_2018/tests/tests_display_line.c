/*
** EPITECH PROJECT, 2018
** BOGGLE
** File description:
** Unit Tests for display_line
*/

#include "boggle.h"
#include "unittest.h"

Test(display_line, test1, .init = redirect_all_std)
{
    display_line(4);
    cr_assert_stdout_eq_str("+++++++++++\n");
}

Test(display_line, test2, .init = redirect_all_std)
{
    display_line(0);
    cr_assert_stdout_eq_str("+++\n");
}

Test(display_middle_line, test3, .init = redirect_all_std)
{
    display_middle_line("laed", 4);
    cr_assert_stdout_eq_str("| l a e d |\n");
}

Test(display_middle_line, test4, .init = redirect_all_std)
{
    display_middle_line("moustique", 9);
    cr_assert_stdout_eq_str("| m o u s t i q u e |\n");
}
