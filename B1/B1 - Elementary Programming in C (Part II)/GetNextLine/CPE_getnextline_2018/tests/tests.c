/*
** EPITECH PROJECT, 2018
** my_printf
** File description:
** redirect unit test
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include <get_next_line.h>

int fd5 = -1;

void open_file5(void)
{
    fd5 = open("files/plop", O_RDONLY);
    cr_redirect_stdout();
}

void close_file5(void)
{
    if (fd5 != -1)
        close(fd5);
}

Test(get_next_line, read_no, .init = open_file5, .fini = close_file5)
{
    char *expected = "toto bonjour";
    char *got = get_next_line(fd5);
    cr_assert_str_eq(got, expected);
}