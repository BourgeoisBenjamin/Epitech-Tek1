/*
** EPITECH PROJECT, 2018
** Bootstrap BSQ
** File description:
** fs_open_file
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int my_putstr(char const *str);

int fs_open_file(char const *filepath)
{
    int fd = open(filepath, O_RDONLY);

    if (fd == -1)
        my_putstr("FAILURE\n");
    else
        my_putstr("SUCCESS\n");

    return fd;
}
