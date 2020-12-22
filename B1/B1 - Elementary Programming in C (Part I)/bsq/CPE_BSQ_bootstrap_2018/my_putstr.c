/*
** EPITECH PROJECT, 2018
** mu_putstr.c
** File description:
** Task02 of Pool Day02
*/

void my_putchar(char c);

int my_putstr(char const *str)
{
    int temp = 0;
    while (str[temp] != '\0') {
        my_putchar(str[temp]);
        temp++;
    }
    return 0;
}