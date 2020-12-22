/*
** EPITECH PROJECT, 2018
** my_str_isprintable.c
** File description:
** Task14 of Pool Day06
*/

int my_str_isprintable(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] <= 31) {
            return 0;
        }
    }
    return 1;
}
