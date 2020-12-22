/*
** EPITECH PROJECT, 2018
** GetNextLine - Bootstrap
** File description:
** read_and_display_remaining
*/

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <fcntl.h>
#include <unistd.h>

char *read_stock(char const *a, char const *b)
{
    char *str;
    int i = 0;
    int j = 0;
    str = malloc(sizeof(char) * (my_strlen(a) + my_strlen(b) + 1));

    if (str == NULL) {
        free(str);
        exit(84);
    }

    for (; a[j] != '\0'; i++, j++)
        str[i] = a[j];

    for (j = 0; b[j] != '\n' && b[j] != '\0'; j++, i++)
        str[i] = b[j];

    str[i] = '\0';
    return str;
}

int my_strlen(char const *str)
{
    int i = 0;
    while (str[i] != '\0') {
        i++;
    }
    return i;
}

char *read_and_display_remaining(int fd, int n)
{
    char *buffer = malloc(sizeof(char) * (n + 1));
    int size = 1;
    int i = 0;
    char *line = "\0";

    while (size != -1) {
        size = read(fd, buffer, n);
        buffer[size] = '\0';
        line = read_stock(line, buffer);
        for (i = 0; i < size; i++)
            if (buffer[i] == '\n') {
                write(1, &buffer[i]);
                size = -1;
            }
    }
    return line;
}