/*
** EPITECH PROJECT, 2018
** my_strupcase.
** File description:
** Task07 of Pool Day06
*/

char *my_strupcase(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if ('a' <= str[i] && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
        i++;
    }
    return str;
}
