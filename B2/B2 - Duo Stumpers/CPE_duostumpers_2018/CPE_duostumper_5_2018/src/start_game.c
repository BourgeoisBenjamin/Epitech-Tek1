/*
** EPITECH PROJECT, 2019
** start game
** File description:
** start game
*/

#include "lingo.h"

char *choose_word(char **tab)
{
    int nb_line = get_size_array(tab);
    int select = 0;

    srand(time(NULL));
    select = rand() % nb_line;
    return (tab[select]);
}

char *start_game(char *original_word)
{
    char *copy_word = malloc(sizeof(char) * (strlen(original_word) + 1));
    int i = 1;

    if (copy_word == NULL)
        return (NULL);
    copy_word[0] = original_word[0];
    for (; original_word[i]; i++)
        copy_word[i] = '*';
    copy_word[i] = '\0';
    printf("*: invalid letter\n?: incorrectly placed letter\nWill you find");
    printf(" the secret word?\n%s\n\n", copy_word);
    return (copy_word);
}
