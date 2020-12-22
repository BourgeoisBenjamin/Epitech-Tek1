/*
** EPITECH PROJECT, 2018
** my_puterr
** File description:
** display error
*/

#include <unistd.h>

int my_strlen(char *str)
{
    int len = 0;

    while (str[len])
        len++;
    return (len);
}

void my_puterr(char *str)
{
    write(2, str, my_strlen(str));
}
