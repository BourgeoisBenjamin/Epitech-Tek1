/*
** EPITECH PROJECT, 2019
** MINISHELL2
** File description:
** reset_redirect
*/

#include "minishell2.h"

void reset_redirect(t_info *shell)
{
    if (shell->path) {
        free(shell->path);
        shell->path = NULL;
    }
    shell->child_pid = 0;
    shell->status = 0;
}
