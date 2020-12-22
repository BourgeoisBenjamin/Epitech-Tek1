/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** write_in_buffer.c
*/

#include <my.h>

char *write_in_buffer(char *buffer, char *str)
{
    int i = 0;
    int j = 0;

    while (buffer[i] != '\0') {
        i++;
    }
    while (str[j] != '\0') {
        buffer[i] = str[j];
        i++;
        j++;
    }
    return buffer;
}