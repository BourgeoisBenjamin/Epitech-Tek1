/*
** EPITECH PROJECT, 2019
** game
** File description:
** game
*/

#include "lingo.h"

char *get_word(char *word)
{
    int len = my_strlen(word);
    char *input = NULL;

    my_putchar('>');
    input = get_next_line(0);
    if (input == NULL)
        return (NULL);
    if (my_strlen(input) < len) {
        printf("Word too short. Retry.\n");
        free(input);
        return (get_word(word));
    } else if (my_strlen(input) > len) {
        printf("Word too long. Retry.\n");
        free(input);
        return (get_word(word));
    }
    return (input);
}

char *check_pos(int i, char *input, char *original_word, char *copy_word)
{
    for (int j = 0; original_word[j]; j++) {
        if (input[j] != original_word[j] && input[i] == original_word[j]) {
            copy_word[i] = '?';
            break;
        }
    }
    return (copy_word);
}

int check_input(char *input, char *copy_word, char *original_word)
{
    int win = 1;

    for (int i = 1; copy_word[i]; i++)
        copy_word[i] = '*';
    for (int i = 1; input[i]; i++) {
        if (input[i] == original_word[i]) {
            copy_word[i] = input[i];
            continue;
        }
        win = 0;
        copy_word = check_pos(i, input, original_word, copy_word);
    }
    if (input[0] != original_word[0])
        win = 0;
    printf("%s\n\n", copy_word);
    return (win);
}

int run_game(char *original_word, char *copy_word)
{
    char *input = NULL;
    int win = 0;

    for (int round = 1; round <= my_strlen(copy_word) && !win; round++) {
        printf("Round %i\n", round);
        if ((input = get_word(copy_word)) == NULL) {
            putchar('\n');
            free(input);
            return (-1);
        }
        win = check_input(input, copy_word, original_word);
        free(input);
    }
    return (win);
}

int game(char **tab)
{
    char *original_word = choose_word(tab);
    char *copy_word = start_game(original_word);
    int win = 0;

    if (copy_word == NULL)
        return (-1);
    if (my_strlen(copy_word) == 1)
        win = 1;
    if ((win = run_game(original_word, copy_word)) == -1) {
        free(copy_word);
        return (0);
    }
    if (win == 0)
        printf("You lost!\n");
    else
        printf("You won!\n");
    free(copy_word);
    return (0);
}
