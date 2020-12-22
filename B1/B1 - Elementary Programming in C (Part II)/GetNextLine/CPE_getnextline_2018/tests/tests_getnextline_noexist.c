/*
** EPITECH PROJECT, 2018
** my_printf
** File description:
** redirect unit test
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include <get_next_line.h>

int fd3 = -1;

void open_file3(void)
{
    fd3 = open("files/noexist.txt", O_RDONLY);
    cr_redirect_stdout();
}

void close_file3(void)
{
    if (fd3 != -1)
        close(fd3);
}

Test(get_next_line, read_noexist, .init = open_file3, .fini = close_file3)
{
    char *got = get_next_line(fd3);
    cr_assert_null(got);
}

Test(get_next_line, multiple_noexist, .init = open_file3, .fini = close_file3)
{
    get_next_line(fd3);
    get_next_line(fd3);
    get_next_line(fd3);
    char *got = get_next_line(fd3);
    cr_assert_null(got);
}