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
#include <stdlib.h>

int my_putstr(char const *str);

void fs_cat_x_bytes(char const *filepath, int x)
{
    int fd = open(filepath, O_RDONLY);
    char *buffer = malloc(sizeof(char) * (x + 1));
    int size;

    if (fd == -1)
        return;

    size = read(fd, buffer, x);
    buffer[x + 1] = '\0';
    my_putstr(buffer);
    free(buffer);
    close(fd);
}
