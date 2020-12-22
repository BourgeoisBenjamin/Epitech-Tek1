/*
** EPITECH PROJECT, 2018
** FAZZBIZZ
** File description:
** Unit Tests Criterion for the fazzbizz function
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "fazzbizz.h"

void redirect_all_std(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(fazzbizz, simple_test, .init = redirect_all_std)
{
    fazzbizz(8, 8);
    cr_assert_stdout_eq_str("8\n");
}
