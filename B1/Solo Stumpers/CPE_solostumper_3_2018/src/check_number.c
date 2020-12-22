/*
** EPITECH PROJECT, 2019
** FAZZBIZZ
** File description:
** check_number
*/

#include "fazzbizz.h"

int check_number(char *str)
{
    for (int i = 0; str[i]; i++) {
        if (!('0' <= str[i] && str[i] <= '9')) {
            return 1;
        }
    }
    return 0;
}
