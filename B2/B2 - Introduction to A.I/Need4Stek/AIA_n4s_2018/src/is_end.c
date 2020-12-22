/*
** EPITECH PROJECT, 2019
** NEED4STEK
** File description:
** is_end
*/

#include "n4s.h"

int is_end(char **tab)
{
    if (my_strcmp("Track Cleared", tab[35]) == 0)
        return (1);
    return (0);
}
