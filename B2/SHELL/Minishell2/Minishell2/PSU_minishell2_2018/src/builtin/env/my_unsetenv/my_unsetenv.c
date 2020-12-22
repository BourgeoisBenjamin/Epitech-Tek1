/*
** EPITECH PROJECT, 2019
** MINISHELL2
** File description:
** my_unsetenv
*/

#include "minishell2.h"

int my_unsetenv(t_info *shell, t_command *command)
{
    if (get_size_array(command->tab_command) < 2) {
        my_printe("unsetenv : Too few arguments.\n");
        return -1;
    }
    shell->env = do_unsetenv(shell->env, command->tab_command[1]);
    if (shell->env == NULL)
        return -1;
    return 0;
}
