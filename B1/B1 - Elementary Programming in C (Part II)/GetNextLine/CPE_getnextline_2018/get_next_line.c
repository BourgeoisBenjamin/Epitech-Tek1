/*
** EPITECH PROJECT, 2018
** GetNextLine
** File description:
** get_next_line.c
*/

#include <get_next_line.h>

char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;
    while (i < n && src[i] != '\0') {
            dest[i] = src[i];
            i++;
    }
    if (n > i) {
        dest[i] = '\0';
    }
    return dest;
}

int my_strlen(char const *str)
{
    int i = 0;
    while (str[i] != '\0') {
        i++;
    }
    return i;
}

char *mem_line(char *line, char *buffer, int i, int j)
{
    char *newline = NULL;
    int len = 0;

    if (line != 0) {
        len = my_strlen(line);
        newline = malloc(sizeof(char) * (len + j + 1));
        if (newline == NULL)
            return NULL;
        my_strncpy(newline, line, len);
    } else {
        newline = malloc(sizeof(char) * (len + j + 1));
        if (newline == NULL)
            return NULL;
    }
    newline[len + j] = '\0';
    my_strncpy(newline + len, buffer + i, j);

    return (newline);
}

char *get_next_line(int fd)
{
    static char buffer[READ_SIZE];
    static int size = 1;
    static int i = 1;
    char *line = NULL;
    for (int j = 0; size > 0; j++) {
        if (size <= i) {
            i = j = 0;
            size = read(fd, buffer, READ_SIZE);
            buffer[size] = '\0';
        }
        if (buffer[i + j] == '\n' && size > 0) {
            line = mem_line(line, buffer, i, j);
            i = (line == NULL) ? i : i + j + 1;
            return line;
        } else if (buffer[i + j] == '\0' && size > 0) {
            line = mem_line(line, buffer, i, j + 1);
            i = size;
        }
    }
    return line;
}
