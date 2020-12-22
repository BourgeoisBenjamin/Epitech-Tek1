/*
** EPITECH PROJECT, 2018
** ASM
** File description:
** get_line
*/

#include "asm.h"

char *get_line(FILE *stream)
{
    char *line = NULL;
    size_t len = 0;
    ssize_t read = 0;

    read = getline(&line, &len, stream);
    if (read == -1)
        return (NULL);
    line[read] = '\0';

    return (line);
}
