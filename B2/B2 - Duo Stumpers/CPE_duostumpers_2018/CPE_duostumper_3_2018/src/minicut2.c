/*
** EPITECH PROJECT, 2019
** MINICUT
** File description:
** minicut
*/

#include "minicut.h"

/*int is_arg(char *str)
{
    if (my_strcmp(str, "-c") == 0 || my_strcmp(str, "--characters") == 0)
        return (1);
    if (my_strcmp(str, "-d") == 0 || my_strcmp(str, "--delimiter") == 0)
        return (2);
    if (my_strcmp(str, "-f") == 0 || my_strcmp(str, "--fields") == 0)
        return (3);
    return (0);
}

t_opt **init_opt(void)
{
    t_opt **opt = malloc(sizeof(t_opt*) * 4);
    if (opt == NULL)
        return (NULL);
    for (int i = 0; i < 3; i++) {
        opt[i] = malloc(sizeof(t_opt));
        if (opt[i] == NULL) {
            delete_opt(opt);
            return (NULL);
        }
        opt[i]->name = NULL;
        opt[i]->activate = 0;
        opt[i]->arg = NULL;
    }
    opt[3] = NULL;
    return (opt);
}

t_opt **get_arg(int argc, char **argv)
{
    t_opt **opt = init_opt();
    if (opt == NULL)
        return (NULL);

    for (int i = 1; i < argc && i < 7; i += 2) {
        if (is_arg(argv[i]) == 0) {
            delete_opt(opt);
            return (NULL);
        }
        opt[i / 2]->name = argv[i];
        opt[i / 2]->activate = 1;
        if (i + 1 < argc)
            opt[i / 2]->arg = argv[i + 1];
        else {
            delete_opt(opt);
            return (NULL);
        }
    }
    opt[3] = NULL;
    return (opt);
}

int verif_option(t_opt **opt)
{
    int c = 0;
    int d = 0;
    int f = 0;

    for (int i = 0; opt[i] && opt[i]->activate; i++) {
        my_printf("%s\n", opt[i]->name);
        if (is_arg(opt[i]->name) == 1)
            c++;
        else if (is_arg(opt[i]->name) == 2)
            d++;
        else
            f++;
        if (c == 2 || d == 2 || f == 2)
            return (84);
    }
    return (0);
}

int verif_arg_d(t_opt *opt)
{
    if (my_strlen(opt->arg) != 1)
        return (84);
    return (0);
}

int verif_arg(t_opt **opt)
{
    int error = 0;
    for (int i = 0; opt[i]; i++) {
        if (is_arg(opt[i]->name) == 2)
            error = verif_arg_d(opt[i]);
        else
            error = verif_arg_c_f(opt[i]);
        if (error != 0)
            return (84);
    }
    return (0);
}
*/
int minicut(int argc, char **argv)
{
    t_opt **opt = get_arg(argc, argv);

    if (opt == NULL || argc == 1 || verif_option(opt) == 84 || argc > 7) {
        delete_opt(opt);
        return (84);
    }
    delete_opt(opt);
    return (0);
}
