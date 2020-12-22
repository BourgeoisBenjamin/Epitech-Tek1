/*
** EPITECH PROJECT, 2019
** MINISHELL2
** File description:
** my_setenv
*/

#include "minishell2.h"

int my_setenv(t_info *shell, t_command *command)
{
    if (verif_arg_env(command->tab_command))
        return -1;
    if (get_size_array(command->tab_command) == 1) {
        my_env(shell, command);
        return 0;
    }
    if (is_in_env(shell->env, command->tab_command[1]))
        shell->env = replace_venv(shell->env, command->tab_command[1],
        command->tab_command[2]);
    else
        shell->env = add_venv(shell->env, command->tab_command[1],
        command->tab_command[2]);
    return 0;
}
