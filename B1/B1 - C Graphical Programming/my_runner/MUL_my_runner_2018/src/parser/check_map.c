/*
** EPITECH PROJECT, 2018
** my_runner
** File description:
** check_map
*/

#include <runner.h>

int check_map(char *line)
{
    for (int i = 0; line[i]; i++) {
        if (line[i] != ' ' && line[i] != '1' && line[i] != '2'
            && line[i] != '3' && line[i] != '4' && line[i] != '\n') {
            return 84;
        }
    }
    return 0;
}