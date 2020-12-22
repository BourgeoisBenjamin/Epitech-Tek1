/*
** EPITECH PROJECT, 2018
** my_strstr.c
** File description:
** Task04 of Pool Day06
*/

#include <unistd.h>

char *my_strstr(char *str, char const *to_find)
{
    int i = 0;
    int j = 0;
    int index = -1;

    while (str[i] != '\0' && index == -1) {
        while (str[j + i] == to_find[j] && index == -1) {
            index = (to_find[j + 1] == '\0') ? i : index;
            j++;
        }
        i++;
    }
    if (index == -1)
        return (NULL);
    else
        return (&str[index]);
}
