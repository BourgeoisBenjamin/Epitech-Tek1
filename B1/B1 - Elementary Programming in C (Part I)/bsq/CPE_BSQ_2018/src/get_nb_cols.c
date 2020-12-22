/*
** EPITECH PROJECT, 2018
** BSQ
** File description:
** get_nb_cols.c
*/

int get_nb_cols(char *str)
{
    int nb_cols = 0;
    int i = 0;

    for (i = 0; str[i] != '\n'; i++);
    i++;
    for (; str[i] != '\n'; i++) {
        nb_cols++;
    }
    return nb_cols;
}
