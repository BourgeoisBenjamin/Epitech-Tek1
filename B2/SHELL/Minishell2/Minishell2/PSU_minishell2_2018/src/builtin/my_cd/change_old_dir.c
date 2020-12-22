/*
** EPITECH PROJECT, 2019
** MINISHELL2
** File description:
** change_old_dir
*/

#include "minishell2.h"

int change_old_dir(t_info *shell)
{
    char *old_pwd = search_env(shell->env, "OLDPWD=");
    if (old_pwd == NULL) {
        my_printe("%s: No such file or directory\n", old_pwd);
        free(old_pwd);
        return -1;
    }
    if (change_dir(old_pwd) == -1) {
        free(old_pwd);
        return -1;
    }
    free(old_pwd);
    return 0;
}
