/*
** EPITECH PROJECT, 2019
** MINISHELL2
** File description:
** parse_command
*/

#include "minishell2.h"

int parse_command(t_command *command, t_info *shell)
{
    if (command->tab_command[0] == NULL)
        return (EXIT_SUCCESS);
    if (my_strcmp(command->tab_command[0], "exit") == 0
    && my_strlen(command->tab_command[0]) == 4) {
        shell->exit = 1;
        return (EXIT_SUCCESS);
    }
    if (is_skip_command(command))
        return (EXIT_SUCCESS);
    if (command_exec(command, shell) == EXIT_FAILURE)
        return (EXIT_FAILURE);
    return (EXIT_SUCCESS);
}
