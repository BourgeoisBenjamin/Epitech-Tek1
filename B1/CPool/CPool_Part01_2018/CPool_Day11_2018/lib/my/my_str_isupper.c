/*
** EPITECH PROJECT, 2018
** my_str_isupper.c
** File description:
** Task12 of Pool Day06
*/

int my_str_isupper(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (('A' > str[i]) || (str[i] > 'Z')) {
            return 0;
        }
        i++;
    }
    return 1;
}