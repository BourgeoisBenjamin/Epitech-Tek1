/*
** EPITECH PROJECT, 2019
** MINISHELL1
** File description:
** repair_env
*/

#include "minishell.h"

void repair_env(t_info *program)
{
    if (!(is_in_env(program->env, "PATH"))) {
        program->env = add_venv(program->env, "PATH",
        "/usr/local/bin:/usr/bin:/bin:/usr/local/sbin:/usr/sbin");
    }
}
