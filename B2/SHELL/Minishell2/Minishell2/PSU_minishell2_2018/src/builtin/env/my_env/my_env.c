/*
** EPITECH PROJECT, 2019
** MINISHELL2
** File description:
** my_env
*/

#include "minishell2.h"

int my_env(t_info *shell, t_command *command)
{
    (void)command;
    print_array(shell->env);
    return 0;
}
