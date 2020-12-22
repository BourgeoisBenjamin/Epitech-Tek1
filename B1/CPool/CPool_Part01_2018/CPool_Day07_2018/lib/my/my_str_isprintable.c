/*
** EPITECH PROJECT, 2018
** my_str_isprintable.c
** File description:
** Task14 of Pool Day06
*/

int my_str_isprintable(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] <= 31) {
            return 0;
        }
        i++;
    }
    return 1;
}
