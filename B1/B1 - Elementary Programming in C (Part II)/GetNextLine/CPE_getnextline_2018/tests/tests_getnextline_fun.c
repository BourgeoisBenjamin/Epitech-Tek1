/*
** EPITECH PROJECT, 2018
** my_printf
** File description:
** redirect unit test
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include <get_next_line.h>

int fd4 = -1;

void open_file4(void)
{
    fd4 = open("files/fun.txt", O_RDONLY);
    cr_redirect_stdout();
}

void close_file4(void)
{
    if (fd4 != -1)
        close(fd4);
}

Test(get_next_line, read_line_fun, .init = open_file4, .fini = close_file4)
{
    char *expected = "            how are ";
    get_next_line(fd4);
    get_next_line(fd4);
    get_next_line(fd4);

    char *got = get_next_line(fd4);
    cr_assert_str_eq(got, expected);
}

Test(get_next_line, multiplelinefun, .init = open_file4, .fini = close_file4)
{
    char *expected = "                        ";
    get_next_line(fd4);
    get_next_line(fd4);
    get_next_line(fd4);
    get_next_line(fd4);
    get_next_line(fd4);
    char *got = get_next_line(fd4);
    cr_assert_str_eq(got, expected);
}

Test(get_next_line, read_all_line_fun, .init = open_file4, .fini = close_file4)
{
    char *got = NULL;
    char *expected[] = {"    ",
    "    hello ",
    "        world ",
    "            how are ",
    "                you?",
    "                        "};

    for (int i = 0; i < 6; i++) {
        got = get_next_line(fd4);
        cr_assert_str_eq(got, expected[i]);
    }
}