/*
** EPITECH PROJECT, 2019
** MINISHELL2
** File description:
** init_builtin
*/

#include "minishell2.h"

t_builtin **init_builtin(void)
{
    t_builtin **builtin = malloc(sizeof(t_builtin *) * (4 + 1));
    if (builtin == NULL)
        return (NULL);
    int (*ft[5])(t_info*, t_command*) =
    {&my_cd, &my_setenv, &my_unsetenv, &my_env};
    char *name[] = {"cd", "setenv", "unsetenv", "env"};
    for (int i = 0; i < 4; i++) {
        builtin[i] = malloc(sizeof(t_builtin));
        if (builtin[i] == NULL)
            return (NULL);
        builtin[i]->name = my_strdup(name[i]);
        if (builtin[i]->name == NULL) {
            delete_builtin(builtin);
            return (NULL);
        }
        builtin[i]->ft = ft[i];
    }
    builtin[4] = NULL;
    return (builtin);
}
