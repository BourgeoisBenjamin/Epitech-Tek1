/*
** EPITECH PROJECT, 2019
** MINISHELL1
** File description:
** my_env
*/

#include "minishell.h"

int my_env(t_info *program)
{
    print_array(program->env);
    return 0;
}
