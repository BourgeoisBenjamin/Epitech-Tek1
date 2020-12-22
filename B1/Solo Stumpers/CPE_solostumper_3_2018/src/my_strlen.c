/*
** EPITECH PROJECT, 2019
** FAZZBIZZ
** File description:
** my_strlen
*/

#include "fazzbizz.h"

int my_strlen(char const *str)
{
    int i = 0;
    while (str[i] != '\0') {
        i++;
    }
    return i;
}
