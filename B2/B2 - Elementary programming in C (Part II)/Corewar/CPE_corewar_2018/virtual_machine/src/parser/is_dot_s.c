/*
** EPITECH PROJECT, 2018
** ASM
** File description:
** is_dot_s
*/

#include "vm.h"

bool is_dot_s(char *filepath)
{
    bool is_dot = false;
    int i = 0;

    for (i = 0; filepath[i] != '\0'; i++) {
        if (filepath[i] == '.') {
            is_dot = true;
            break;
        }
    }
    if (is_dot == false || i == 0)
        return (false);
    if (filepath[i + 1] != 's')
        return (false);
    if (filepath[i + 2] != '\0')
        return (false);
    return (true);
}
