/*
** EPITECH PROJECT, 2018
** Bootstrap BSQ
** File description:
** fs_print_first_line
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

void fs_cat_x_bytes(char const *filepath, int x);

void fs_print_first_line(char const *filepath)
{
    int fd = open(filepath, O_RDONLY);

    if (fd == -1)
        return;

    char buffer[1] = {0};
    int size = read(fd, buffer, 1);
    int i = 0;

    while (buffer[0] != '\n') {
        i++;
        size = read(fd, buffer, 1);
    }
    fs_cat_x_bytes(filepath, i);
    close(fd);
}
