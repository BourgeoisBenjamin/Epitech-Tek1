/*
** EPITECH PROJECT, 2018
** Unit Test disp_stdarg.c
** File description:
** Unit Tests Criterion for the disp_stdarg.c
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>

int disp_stdarg(char *s, ...);

void redirect_all_std(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(disp_stdarg, display_correct_only_int, .init = redirect_all_std)
{
    disp_stdarg("iii", 34, 45, 56);
    cr_assert_stdout_eq_str("34\n45\n56\n");
}

Test(disp_stdarg, display_correct_only_str, .init = redirect_all_std)
{
    disp_stdarg("ssss", "Bonjour", "Tout", "Le", "Monde");
    cr_assert_stdout_eq_str("Bonjour\nTout\nLe\nMonde\n");
}

Test(disp_stdarg, display_correct_multiple, .init = redirect_all_std)
{
    disp_stdarg("ics", 34, 'c', "Bonjour");
    cr_assert_stdout_eq_str("34\nc\nBonjour\n");
}

Test(disp_stdarg, display_correct_multiple_1, .init = redirect_all_std)
{
    disp_stdarg("csiis", 'X', "hi", 10, -3, "plop");
    cr_assert_stdout_eq_str("X\nhi\n10\n-3\nplop\n");
}
