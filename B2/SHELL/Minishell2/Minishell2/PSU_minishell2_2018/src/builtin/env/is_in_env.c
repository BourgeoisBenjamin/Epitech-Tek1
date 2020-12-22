/*
** EPITECH PROJECT, 2019
** MINISHELL2
** File description:
** is_in_env
*/

#include "minishell2.h"

int is_in_env(char **env, char *new)
{
    char *tmp = NULL;
    for (int i = 0; env != NULL && env[i] != NULL; i++) {
        tmp = my_strdup(env[i]);
        for (int j = 0; tmp[j] != '\0'; j++) {
            if (tmp[j] == '=')
                tmp[j] = '\0';
        }
        if (my_strcmp(tmp, new) == 0 && my_strlen(tmp) == my_strlen(new)) {
            free(tmp);
            return 1;
        }
        free(tmp);
    }
    return 0;
}
