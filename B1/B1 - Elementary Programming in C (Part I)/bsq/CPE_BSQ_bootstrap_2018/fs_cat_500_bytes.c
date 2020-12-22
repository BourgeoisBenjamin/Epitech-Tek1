/*
** EPITECH PROJECT, 2018
** Bootstrap BSQ
** File description:
** fs_cat_x_bytes
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int my_putstr(char const *str);

void fs_cat_500_bytes(char const *filepath)
{
    int fd = open(filepath, O_RDONLY);
    char buffer[501] = {0};
    int size;

    if (fd == -1)
        return;

    size = read(fd, buffer, 500);

    my_putstr(buffer);

    close(fd);
}
