/*
** EPITECH PROJECT, 2018
** my_strupcase.
** File description:
** Task08 of Pool Day06
*/

char *my_strlowcase(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if ('a' <= str[i] && str[i] <= 'z')
            str[i] = str[i] + 32;
    }
    return str;
}
