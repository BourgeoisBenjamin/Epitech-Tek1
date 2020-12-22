/*
** EPITECH PROJECT, 2018
** MY ITOA
** File description:
** Converts an int to a char*
*/

#include <stdlib.h>
#include "bistromatic.h"
#include "my.h"

char to_char(int i)
{
    return (i + '0');
}

char *my_itoa(int nb)
{
    char *result;
    int pow = 10;
    int i;
    
    for (i = 0; (nb / pow) > 0; i++) {
        pow *= 10;
    }
    result = malloc(sizeof(char) * (i + 1));
    if (result == NULL)
        return (ERROR_MSG);
    result[i + 1] = '\0';
    while (i >= 0) {
        result[i] = to_char((nb - ((nb / 10) * 10)));
        i--;
        nb = nb / 10;
    }
    return (result);
}

