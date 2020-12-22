/*
** EPITECH PROJECT, 2018
** BSQ
** File description:
** check_str.c
*/

#include <bsq.h>

int check_str(char *str)
{
    int i = 0;

    while (str[i] != '\n')
        i++;
    i++;
    for (; str[i] != '\0'; i++) {
        if (str[i] != '.' && str[i] != 'o' && str[i] != '\n') {
            free(str);
            my_puterror("Invalid File\n");
            exit(84);
        }
    }
    return 1;
}

int check_map_rows(char *str, int nb_rows)
{
    int j = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n')
            j++;
    }

    if (j - 1 != nb_rows) {
        free(str);
        my_puterror("Invalid File size\n");
        exit(84);
    }
    return 0;
}