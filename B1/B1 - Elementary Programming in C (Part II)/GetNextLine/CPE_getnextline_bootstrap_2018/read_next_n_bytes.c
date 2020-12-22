/*
** EPITECH PROJECT, 2018
** GetNextLine - Bootstrap
** File description:
** read_next_n_bytes
*/

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <fcntl.h>
#include <unistd.h>

char *read_next_n_bytes(int fd, int n)
{
    char *buffer = malloc(sizeof(char) * (n + 1));
    int size = 1;

    size = read(fd, buffer, n);
    if (size == -1) {
        return NULL;
    }
    buffer[size] = '\0';

    return buffer;
}