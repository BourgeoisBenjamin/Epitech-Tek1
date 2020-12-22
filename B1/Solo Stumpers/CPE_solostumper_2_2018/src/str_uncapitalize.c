/*
** EPITECH PROJECT, 2019
** anagram
** File description:
** str_uncapitalize
*/

#include <anagram.h>

void str_uncapitalize(char *str)
{
    for (int i = 0; str[i]; i++) {
        if ('A' <= str[i] && str[i] <= 'Z') {
            str[i] = str[i] + 32;
        }
    }
}
