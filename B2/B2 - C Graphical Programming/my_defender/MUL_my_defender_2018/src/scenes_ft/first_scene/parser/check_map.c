/*
** EPITECH PROJECT, 2019
** MY_DEFENDER
** File description:
** posed_tower
*/

#include "defender.h"

int check_map(char *line)
{
    for (int i = 0; line[i]; i++) {
        if ((line[i] != '1' && line[i] != '2' && line[i] != '3'
        && line[i]!= '\n') || (my_strlen(line) != 15)) {
            return -1;
        }
    }
    return 0;
}
