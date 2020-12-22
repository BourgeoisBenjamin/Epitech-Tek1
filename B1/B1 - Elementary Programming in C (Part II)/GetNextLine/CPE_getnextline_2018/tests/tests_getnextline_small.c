/*
** EPITECH PROJECT, 2018
** my_printf
** File description:
** redirect unit test
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include <get_next_line.h>

int fd1 = -1;

void open_file1(void)
{
    fd1 = open("files/oneletter.txt", O_RDONLY);
    cr_redirect_stdout();
}

void close_file1(void)
{
    if (fd1 != -1)
        close(fd1);
}

Test(get_next_line, read_letter, .init = open_file1, .fini = close_file1)
{
    char *expected = "c";
    char *got = get_next_line(fd1);
    cr_assert_str_eq(got, expected);
}

Test(get_next_line, read_other_letter, .init = open_file1, .fini = close_file1)
{
    get_next_line(fd1);
    char *got = get_next_line(fd1);
    cr_assert_null(got);
}

Test(get_next_line, multiplelineone, .init = open_file1, .fini = close_file1)
{
    get_next_line(fd1);
    get_next_line(fd1);
    get_next_line(fd1);
    char *got = get_next_line(fd1);
    cr_assert_null(got);
}