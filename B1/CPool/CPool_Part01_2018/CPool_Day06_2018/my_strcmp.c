/*
** EPITECH PROJECT, 2018
** my_strcmp.c
** File description:
** Task05 of Pool Day06
*/

int my_strlen(char const *str);

int my_strcmp(char const *s1, char const *s2)
{
    for (int i = 0; i < my_strlen(s1) && i < my_strlen(s2); i++) {
        if (s1[i] > s2[i])
            return 1;
        else if (s1[i] < s2[i])
            return -1;
    }
    return 0;
}
