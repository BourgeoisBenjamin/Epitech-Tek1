/*
** EPITECH PROJECT, 2018
** my_puterror
** File description:
** my_puterror
*/

#include <unistd.h>

int my_strlen(char *str);

void my_puterror(char *str)
{
    write(2, str, my_strlen(str));
}
