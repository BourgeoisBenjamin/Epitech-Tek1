/*
** EPITECH PROJECT, 2018
** Bootstrap GetNextLine
** File description:
** main.c
*/

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <fcntl.h>
#include <unistd.h>

int main(void)
{
    int fd = open("text.txt", O_RDONLY);

    if (fd == -1) {
        return 84;
    }
    read_and_display_read_line_n(0, 5);
}