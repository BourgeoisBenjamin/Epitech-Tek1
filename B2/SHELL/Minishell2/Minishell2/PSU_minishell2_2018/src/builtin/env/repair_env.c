/*
** EPITECH PROJECT, 2019
** MINISHELL2
** File description:
** repair_env
*/

#include "minishell2.h"

char **repair_env(char **env)
{
    if (!(is_in_env(env, "PATH"))) {
        return (add_venv(env, "PATH",
        "/usr/local/bin:/usr/bin:/bin:/usr/local/sbin:/usr/sbin"));
    }
    return (env);
}
