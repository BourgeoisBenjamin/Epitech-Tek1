/*
** EPITECH PROJECT, 2018
** my_strncmp.c
** File description:
** Task06 of Pool Day06
*/

int my_strncmp(char const *s1, char const *s2, int n)
{
    for (int i = 0; i < n && s1[i] != '\0' && s2[i] != '\0'; i++) {
        if (s1[i] > s2[i])
            return 1;
        else if (s1[i] < s2[i])
            return -1;
    }
    return 0;
}
