/*
** EPITECH PROJECT, 2019
** MINISHELL2
** File description:
** delete_all
*/

#include "minishell2.h"

void delete_all(t_info *shell)
{
    if (shell->builtin)
        shell->builtin = delete_builtin(shell->builtin);
    if (shell->env)
        shell->env = free_array(shell->env);
    if (shell->command_line) {
        free(shell->command_line);
        shell->command_line = NULL;
    }
    if (shell->path) {
        free(shell->path);
        shell->path = NULL;
    }
    if (shell)
        free(shell);
}
