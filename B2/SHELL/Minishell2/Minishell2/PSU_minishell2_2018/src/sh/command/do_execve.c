/*
** EPITECH PROJECT, 2019
** MINISHELL2
** File description:
** do_execve
*/

#include "minishell2.h"

int do_execve(t_info *shell, t_command *command)
{
    if ((shell->child_pid = create_process()) == -1) {
        perror("fork :");
        return (EXIT_FAILURE);
    } else if (shell->child_pid == 0) {
        if (child_redirection(shell, command) == EXIT_FAILURE)
            return (EXIT_FAILURE);
        child_process(shell, command);
    } else {
        close(shell->fd[1]);
        shell->fdd = shell->fd[0];
    }
    return (EXIT_SUCCESS);
}
