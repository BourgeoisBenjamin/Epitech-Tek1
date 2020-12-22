/*
** EPITECH PROJECT, 2019
** MINISHELL2
** File description:
** create_command
*/

#include "minishell2.h"

t_command *create_command(int len_word, char *str, int i)
{
    t_command *command = malloc(sizeof(t_command));
    if (command == NULL)
        return (NULL);
    command->next = NULL;
    command->prev = NULL;
    command->command = malloc(sizeof(char) * len_word + 1);
    command->separator = NULL;
    command->tab_command = NULL;
    if (command->command == NULL)
        return (NULL);
    my_strncpy(command->command, &str[i - len_word + 1], len_word);
    return (command);
}
