/*
** EPITECH PROJECT, 2019
** get arg
** File description:
** get arg
*/

#include "minicut.h"

int verif_arg(int c, t_opt **opt)
{
    int i = 0;
    switch (c) {
    case 'c':
        i = 0;
        break;
    case 'd':
        i = 1;
        break;
    case 'f':
        i = 2;
        break;
    case '?':
        return (84);
    }
    if (opt[i]->arg)
        free(opt[i]->arg);
    if ((opt[i]->arg = my_strdup(optarg)) == NULL)
        return (84);
    opt[i]->activate = 1;
    return (0);
}

t_opt **get_arg(int argc, char **argv)
{
    int option = 0;
    int c = 0;
    static struct option l_option[] = {
        {"characters", 1, 0, 'c'},
        {"delimiter", 1, 0, 'd'},
        {"fields", 1, 0, 'f'},
        {0, 0, 0, 0}
    };
    t_opt **opt = init_opt();

    if (opt == NULL)
        return (NULL);
    while ((c = getopt_long(argc, argv, "c:d:f:", l_option, &option)) != -1) {
        if (verif_arg(c, opt) == 84)
            return (NULL);
    }
    return (opt);
}
