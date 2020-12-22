/*
** EPITECH PROJECT, 2018
** ASM
** File description:
** open_file_fd
*/

#include "asm.h"

int open_file_fd(char *filename)
{
    int fd = 0;

    fd = open(filename, O_CREAT | O_RDWR, 0664);
    if (fd == -1)
        my_printe("Error with open\n");
    return (fd);
}
