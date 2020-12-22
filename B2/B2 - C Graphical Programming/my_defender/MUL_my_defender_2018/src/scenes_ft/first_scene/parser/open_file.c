/*
** EPITECH PROJECT, 2019
** MY_DEFENDER
** File description:
** open_file
*/

#include "defender.h"

int open_file(char *path)
{
    int fd = open(path, O_RDONLY);
    if (fd == -1)
        return (-1 + my_printe("[MAP] File not found\n"));
    return (fd);
}
