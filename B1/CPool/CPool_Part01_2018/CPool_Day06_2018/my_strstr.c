/*
** EPITECH PROJECT, 2018
** my_strstr.c
** File description:
** Task04 of Pool Day06
*/

char *my_strstr(char *str, char const *to_find)
{
    if (str[0] == '\0')
        return NULL;

    for (int i = 0; to_find[i] != '\0'; i++) {
        if (to_find[i] != str[i])
            return (my_strstr(str + 1, to_find));
    }
    return str;
}
