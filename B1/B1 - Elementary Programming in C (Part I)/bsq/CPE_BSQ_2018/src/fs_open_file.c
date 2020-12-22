/*
** EPITECH PROJECT, 2018
** BSQ
** File description:
** fs_open_file
*/

#include <bsq.h>

int fs_open_file(char const *filepath)
{
    int fd = open(filepath, O_RDONLY);

    if (fd == -1) {
        my_puterror("File not found\n");
        exit(84);
    }
    return fd;
}
