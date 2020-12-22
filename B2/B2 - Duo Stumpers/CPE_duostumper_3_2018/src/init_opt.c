/*
** EPITECH PROJECT, 2019
** MINICUT
** File description:
** minicut
*/

#include "minicut.h"

t_opt **init_opt(void)
{
    char *name = "cdf";
    t_opt **opt = malloc(sizeof(t_opt*) * 4);
    if (opt == NULL)
        return (NULL);
    for (int i = 0; i < 3; i++) {
        opt[i] = malloc(sizeof(t_opt));
        if (opt[i] == NULL) {
            delete_opt(opt);
            return (NULL);
        }
        opt[i]->name = name[i];
        opt[i]->activate = 0;
        opt[i]->arg = NULL;
    }
    opt[3] = NULL;
    return (opt);
}
