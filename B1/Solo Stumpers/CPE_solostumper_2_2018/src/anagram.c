/*
** EPITECH PROJECT, 2019
** anagram
** File description:
** anagram
*/

#include <anagram.h>

int find_anagram(char *str1, char *str2)
{
    int count = 0;
    int find = 0;

    for (int i = 0; str1[i]; i++) {
        find = 0;
        for (int j = 0; str2[j] && find == 0; j++) {
            if (str1[i] == str2[j]) {
                letter_find(str2, j);
                count += 1;
                find = 1;
            }
        }
    }
    return (count);
}

int anagram(char *str1, char *str2)
{
    int count = 0;

    str_uncapitalize(str1);
    str_uncapitalize(str2);

    if (my_strlen(str1) != my_strlen(str2))
        return 0;

    count = find_anagram(str1, str2);

    if (count == my_strlen(str1) && count == my_strlen(str2)) {
        return 1;
    }

    return (0);
}
