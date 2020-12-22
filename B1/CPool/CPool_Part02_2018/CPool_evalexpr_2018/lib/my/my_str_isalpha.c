/*
** EPITECH PROJECT, 2018
** my_str_isalpha.c
** File description:
** Task 10 of Pool Day06
*/

int my_str_isalpha(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (('A' <= str[i] && str[i] <= 'Z')
            || ('a' <= str[i] && str[i] <= 'z')) {
            i++;
        } else {
            return 0;
        }
    }
    return 1;
}
