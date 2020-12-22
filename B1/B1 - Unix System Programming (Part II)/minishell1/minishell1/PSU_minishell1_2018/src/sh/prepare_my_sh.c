/*
** EPITECH PROJECT, 2019
** MINISHELL1
** File description:
** prepare_my_sh
*/

#include "minishell.h"

int prepare_my_sh(char **env)
{
    t_info *program = malloc(sizeof(t_info));
    t_builtin **builtin = init_builtin();
    if (program == NULL || builtin == NULL)
        return EXIT_FAILURE;
    program->env = my_array_cpy(env);
    program->arg = NULL;
    if (program->env == NULL)
        return EXIT_FAILURE;
    prepare_signal();
    if (my_sh(program, builtin) == EXIT_FAILURE)
        return EXIT_FAILURE;
    return EXIT_SUCCESS;
}
