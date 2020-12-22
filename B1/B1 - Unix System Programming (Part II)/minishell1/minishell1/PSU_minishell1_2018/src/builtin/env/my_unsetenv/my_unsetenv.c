/*
** EPITECH PROJECT, 2019
** MINISHELL1
** File description:
** my_unsetenv
*/

#include "minishell.h"

int my_unsetenv(t_info *program)
{
    if (get_size_array(program->arg) < 2) {
        my_printe("unsetenv : Too few arguments.\n");
        return -1;
    }
    program->env = do_unsetenv(program->env, program->arg[1]);
    if (program->env == NULL)
        return -1;
    return 0;
}
