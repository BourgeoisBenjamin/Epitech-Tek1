/*
** EPITECH PROJECT, 2018
** my_evil_str.c
** File description:
** Task04 of Pool Day04
*/

int my_strlen(char const *str);

char *my_evil_str(char *str)
{
    int temp = 0;
    int i = 0;
    int j = my_strlen(str) - 1;

    while (i < j) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
    return str;
}
