/*
** EPITECH PROJECT, 2018
** anagram
** File description:
** my_putstr
*/

#include <anagram.h>

int my_putstr(char const *str)
{
    write(1, str, my_strlen(str));
    return (0);
}
