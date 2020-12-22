/*
** EPITECH PROJECT, 2018
** GetNextLine
** File description:
** Header
*/

#ifndef READ_SIZE
#define READ_SIZE 10
#endif

#include <fcntl.h>
#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>

char *get_next_line(int fd);
char *mem_line(char *line, char *buffer, int i, int j);
char *my_strncpy(char *dest, char const *src, int n);
int my_strlen(char const *str);