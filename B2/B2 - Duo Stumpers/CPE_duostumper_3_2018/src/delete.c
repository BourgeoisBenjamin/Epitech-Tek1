/*
** EPITECH PROJECT, 2019
** MINICUT
** File description:
** delete
*/

#include "minicut.h"

void delete_opt(t_opt **opt)
{
    if (opt == NULL)
        return;
    for (int i = 0; opt[i]; i++) {
        if (opt[i]->arg)
            free(opt[i]->arg);
        free(opt[i]);
    }
    free(opt);
}
