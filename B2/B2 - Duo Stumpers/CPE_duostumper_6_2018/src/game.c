/*
** EPITECH PROJECT, 2019
** game
** File description:
** game
*/

#include "boggle.h"

char *read_word(void)
{
    char *word = NULL;

    my_printf("> ");
    word = get_next_line(0);
    if (word == NULL)
        return (NULL);
    if (my_str_isalpha(word) == 0) {
        free(word);
        return (read_word());
    }
    if (word[0] == '\0') {
        free(word);
        return (read_word());
    }
    return (word);
}

int game(boggle_t *info)
{
    char *word = NULL;

    if (info->word) {
        search_word(info, info->word);
        return (0);
    }
    display_grid(info);
    word = read_word();
    if (word == NULL)
        return (-1);
    while (search_word(info, word) == 0) {
        free(word);
        word = read_word();
        if (word == NULL)
            return (-1);
    }
    free(word);
    return (0);
}
