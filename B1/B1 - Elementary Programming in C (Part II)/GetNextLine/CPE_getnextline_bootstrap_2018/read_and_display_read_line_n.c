/*
** EPITECH PROJECT, 2018
** GetNextLine - Bootstrap
** File description:
** read_and_display_read_line_n
*/

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <fcntl.h>
#include <unistd.h>

void read_and_display_read_line_n(int fd, int n)
{
    char *buffer = malloc(sizeof(char) * (n + 1));
    int size = 1;
    int i = 0;

    while (size != -1) {
        size = read(fd, buffer, n);
        buffer[size] = '\0';
        for (i = 0; i < size; i++)
            if (buffer[i] == '\n')
                size = -1;
        write(1, buffer, i);
    }
}