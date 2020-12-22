/*
** EPITECH PROJECT, 2018
** my_str_isupper.c
** File description:
** Task12 of Pool Day06
*/

int my_str_isupper(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (!('A' <= str[i] && str[i] <= 'Z'))
            return 0;
    }
    return 1;
}
