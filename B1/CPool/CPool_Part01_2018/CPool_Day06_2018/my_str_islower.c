/*
** EPITECH PROJECT, 2018
** my_str_islower.c
** File description:
** Task 12 of Pool Day06
*/

int my_str_islower(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (!('a' <= str[i] && str[i] <= 'z'))
            return 0;
    }
    return 1;
}
