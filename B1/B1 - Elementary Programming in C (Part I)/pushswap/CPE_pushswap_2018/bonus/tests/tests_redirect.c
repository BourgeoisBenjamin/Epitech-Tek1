/*
** EPITECH PROJECT, 2018
** my_printf
** File description:
** redirect unit test
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include <my.h>

void redirect_all_std(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}
