/*
** EPITECH PROJECT, 2019
** FAZZBIZZ
** File description:
** my_puterror
*/

#include "fazzbizz.h"

int my_puterror(char *str)
{
    if (write(2, str, my_strlen(str)) != -1)
        return 0;
    return 84;
}
