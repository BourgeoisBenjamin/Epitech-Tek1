/*
** EPITECH PROJECT, 2018
** my_printf
** File description:
** redirect unit test
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include <get_next_line.h>

int fd2 = -1;

void open_file2(void)
{
    fd2 = open("files/empty.txt", O_RDONLY);
    cr_redirect_stdout();
}

void close_file2(void)
{
    if (fd2 != -1)
        close(fd2);
}

Test(get_next_line, read_empty, .init = open_file2, .fini = close_file2)
{
    char *got = get_next_line(fd2);
    cr_assert_null(got);
}

Test(get_next_line, read_multipleempty, .init = open_file2, .fini = close_file2)
{
    get_next_line(fd2);
    char *got = get_next_line(fd2);
    cr_assert_null(got);
}