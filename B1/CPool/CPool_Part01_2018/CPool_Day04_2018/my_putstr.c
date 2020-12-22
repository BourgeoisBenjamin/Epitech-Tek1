/*
** EPITECH PROJECT, 2018
** mu_putstr.c
** File description:
** Task02 of Pool Day02
*/

int my_strlen(char const *str);

int my_putstr(char const *str)
{
    write(1, str, my_strlen(str));
    return 0;
}
