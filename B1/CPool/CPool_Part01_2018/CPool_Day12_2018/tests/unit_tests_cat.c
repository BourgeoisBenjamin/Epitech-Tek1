/*
** EPITECH PROJECT, 2018
** unit_tests_cat.c
** File description:
** Unit_tests for my cat.c
*/

#include <criterion/criterion.h>
#include <unistd.h>
#include <my.h>

int my_print_error2(char *argv, char *errno);

Test(Error1, get_right_error)
{
    char *errno = "EISDIR";
    cr_expect(my_print_error2("File", errno) == 84);
}

int my_print_error2(char *argv, char *errno)
{
    if (errno == "EISDIR") {
        write(2, argv, my_strlen(argv));
        write(2, ":", 1);
        write(2, " Is a directory\n", 16);
        return 84;
    } else if (errno == "ENOENT") {
        write(2, argv, my_strlen(argv));
        write(2, ":", 1);
        write(2, " No such file or directory\n", 28);
        return 84;
    }
    return 0;
}
