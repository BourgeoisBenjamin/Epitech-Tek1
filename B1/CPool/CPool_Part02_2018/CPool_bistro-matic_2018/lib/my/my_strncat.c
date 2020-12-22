/*
** EPITECH PROJECT, 2018
** my_strncat.c
** File description:
** Task 03 of Pool Day07
*/

int my_strlen(char const *str);

int *my_strncat(char *dest, char const *src, int nb)
{
    int dest_len = my_strlen(dest);
    int i = 0;

    for (i = 0; i < nb && src[i] != '\0'; i++)
        dest[dest_len + i] = src[i];
    dest[dest_len + i] = '\0';
}
