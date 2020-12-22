/*
** EPITECH PROJECT, 2018
** Bootstrap BSQ
** File description:
** fs_understand_return_of_read
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int my_putstr(char const *str);

void fs_understand_return_of_read(int fd, char *buffer, int size)
{
    int read_return = 0;

    read_return = read(fd, buffer, size);

    if (read_return == -1)
        my_putstr("read failed\n");
    else if (read_return == 0)
        my_putstr("read has nothing more to read\n");
    else if (read_return < size)
        my_putstr("read didn't complete the entire buffer\n");
    else if (read_return == size)
        my_putstr("read completed the entire buffer\n");
}
