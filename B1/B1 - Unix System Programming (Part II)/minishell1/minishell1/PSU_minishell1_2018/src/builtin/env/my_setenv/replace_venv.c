/*
** EPITECH PROJECT, 2019
** MINISHELL1
** File description:
** replace_venv
*/

#include "minishell.h"

char **replace_venv(char **env, char *name, char *value)
{
    env = do_unsetenv(env, name);
    env = add_venv(env, name, value);
    return env;
}
