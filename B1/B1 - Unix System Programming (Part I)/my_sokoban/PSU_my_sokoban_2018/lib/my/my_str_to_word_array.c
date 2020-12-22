/*
** EPITECH PROJECT, 2018
** my_str_to_word_array.c
** File description:
** Task 04 of Pool Day08
*/

#include <my.h>

int check_alphanumeric(char c)
{
    if (('0' <= c && c <= '9') || ('a' <= c && c <= 'z')
    || ('A' <= c && c <= 'Z')) {
        return 1;
    } else {
        return 0;
    }
}

int count_word(char *str)
{
    int word_number = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (check_alphanumeric(str[i])
        && !check_alphanumeric(str[i + 1])) {
            word_number++;
        }
    }
    return word_number;
}

char **my_str_to_word_array(char *str)
{
    int index = 0;
    int len_word = 0;
    char **tab_result = malloc(sizeof(char *) * (count_word(str) + 1));

    if (tab_result == NULL)
        return (NULL);
    for (int i = 0; str[i] != '\0'; i++) {
        if (check_alphanumeric(str[i]))
            len_word++;
        if (check_alphanumeric(str[i])
        && !check_alphanumeric(str[i + 1])) {
            tab_result[index] = malloc(len_word + 1);
            my_strncpy(tab_result[index],
            &str[i - len_word + 1], len_word);
            len_word = 0;
            index++;
        }
    }
    tab_result[index] = NULL;
    return tab_result;
}
