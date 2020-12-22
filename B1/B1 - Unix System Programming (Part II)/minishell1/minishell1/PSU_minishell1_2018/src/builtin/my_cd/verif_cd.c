/*
** EPITECH PROJECT, 2019
** MINISHELL1
** File description:
** verif_cd
*/

#include "minishell.h"

int verif_cd(t_info *program)
{
    if (get_size_array(program->arg) > 2) {
        my_printe("cd: Too many arguments\n");
        return -1;
    }
    return 0;
}
