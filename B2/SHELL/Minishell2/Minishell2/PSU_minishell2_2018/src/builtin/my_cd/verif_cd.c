/*
** EPITECH PROJECT, 2019
** MINISHELL2
** File description:
** verif_cd
*/

#include "minishell2.h"

int verif_cd(char **tab_command)
{
    if (get_size_array(tab_command) > 2) {
        my_printe("cd: Too many arguments\n");
        return -1;
    }
    return 0;
}
