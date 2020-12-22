/*
** EPITECH PROJECT, 2018
** ASM
** File description:
** open_file
*/

#include "vm.h"

FILE *get_file(char *filepath)
{
    FILE *fd = fopen(filepath, "r");

    if (fd == NULL) {;
        return (NULL);
    }
    if (is_dot_s(filepath) == false) {
        fclose(fd);
        return (NULL);
    }
    return (fd);
}
