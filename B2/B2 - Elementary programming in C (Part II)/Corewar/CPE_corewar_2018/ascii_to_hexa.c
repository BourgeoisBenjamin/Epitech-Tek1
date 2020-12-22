/*
** EPITECH PROJECT, 2019
** main.c
** File description:
** main for ascii to hexa
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char *my_revstr(char *str)
{
    char c;
    int len = strlen(str);
    int i = 0;

    if (len > 0) {
        while (i < len / 2) {
            c = str[i];
            str[i] = str[len - 1 - i];
            str[len - i - 1] = c;
            i++;
        }
    }
    return (str);
}

void convert_int_to_hex(int value, char *hex, int *ptr)
{
    char letter = 'F';
    int begin = (*ptr);

    while (value > 0) {
        if (value % 16 > 9) {
            hex[*ptr] = letter - (15 - value % 16);
            (*ptr)++;
        } else {
            hex[*ptr] = (value % 16) + 48;
            (*ptr)++;
        }
        value /= 16;
    }
    hex += begin;
    hex = my_revstr(hex);
    hex -= begin;
}

char *ascii_to_hexa(char *ascii)
{
    int value = 0;
    char *hexa = malloc(sizeof(char) * (strlen(ascii) * 2) + 1);
    int ptr = 0;

    if (hexa == NULL)
        return (NULL);
    for (int i = 0; ascii[i] != '\0'; i++) {
        value = ascii[i];
        convert_int_to_hex(value, hexa, &ptr);
    }
    return (hexa);
}

int main(int ac, char **av)
{
    char *result = NULL;

    if (ac != 2)
        return (84);
    result = ascii_to_hexa(av[1]);
    if (result == NULL)
        return (84);
    printf("%s\n", result);
    free(result);
    return (0);
}