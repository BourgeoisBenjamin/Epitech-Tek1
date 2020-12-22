/*
** EPITECH PROJECT, 2019
** MINISHELL1
** File description:
** my_setenv
*/

#include "minishell.h"

int my_setenv(t_info *program)
{
    if (verif_arg_env(program->arg))
        return -1;
    if (get_size_array(program->arg) == 1) {
        my_env(program);
        return 0;
    }
    if (is_in_env(program->env, program->arg[1]))
        program->env = replace_venv(program->env, program->arg[1],
        program->arg[2]);
    else
        program->env = add_venv(program->env, program->arg[1], program->arg[2]);
    return 0;
}
