/*
** EPITECH PROJECT, 2019
** MINICUT
** File description:
** minicut
*/

#include "minicut.h"

int verif_arg_d(t_opt *opt)
{
    if (opt->activate)
        if (my_strlen(opt->arg) != 1)
            return (84);
    return (0);
}

int is_num(char c)
{
    if (c < '0' || c > '9')
        return (0);
    return (1);
}

int verif_array(char **tab2)
{
    if (get_size_array(tab2) > 2 || get_size_array(tab2) < 1)
        return (84);
    for (int i = 0; tab2[i]; i++) {
        if (my_str_is_num(tab2[i]) == 0)
            return (84);
    }
    if (tab2[1] != NULL && my_getnbr(tab2[0]) > my_getnbr(tab2[1]))
        return (84);
    return (0);
}

int verif_arg_c(t_opt *opt)
{
    char **tab = NULL;
    char **tab2 = NULL;
    if (!opt->activate)
        return (0);
    if ((tab = my_str_to_word_array(opt->arg, ',')) == NULL)
        return (84);
    for (int i = 0; tab[i]; i++) {
        if ((tab2 = my_str_to_word_array(tab[i], '-')) == NULL) {
            free_array(tab);
            return (84);
        }
        if (verif_array(tab2) == 84) {
            free_array(tab);
            free_array(tab2);
            return (84);
        }
        tab2 = free_array(tab2);
    }
    free_array(tab);
    return (0);
}

int verif_arg_opt(t_opt **opt)
{
    if (verif_arg_d(opt[1]) == 84)
        return (84);
    if (verif_arg_c(opt[0]) == 84)
        return (84);
    if (verif_arg_c(opt[2]) == 84)
        return (84);
    if (opt[0]->activate == 1 && (opt[1]->activate == 1 || opt[2]->activate == 1))
        return (84);
    if (opt[1]->activate == 1 && opt[2]->activate == 0)
        return (84);
    return (0);
}

int is_score(char *str)
{
    for (int i = 0; str[i]; i++) {
        if (str[i] == '-')
            return (1);
    }
    return (0);
}

int display_c(char *str, t_opt **opt)
{
    int len = 0;
    char **tab2 = NULL;
    char **tab = my_str_to_word_array(opt[0]->arg, ',');
    if (tab == NULL)
        return (84);
    for (int i = 0; tab[i]; i++) {
        tab2 = my_str_to_word_array(tab[i], '-');
        if (tab2 == NULL)
            return (84);
        if (get_size_array(tab2) == 1 && is_score(tab[i])) {
            my_putstr(&str[my_getnbr(tab2[0]) - 1]);
            return (0);
        }
        if (get_size_array(tab2) == 2)
            len = my_getnbr(tab2[1]) - my_getnbr(tab2[0]) + 1;
        else
            len = 1;
        write(1, &str[my_getnbr(tab[i]) - 1], len);
    }
    return (0);
}

int display_f(char *str, t_opt **opt)
{
    char delimiter = '\t';
    char **tab = NULL;
    char **tab2 = my_str_to_word_array(opt[2]->arg, ',');
    char **tab3 = NULL;

    if (opt[1]->activate == 1)
        delimiter = opt[1]->arg[0];
    if (tab2 == NULL || (tab = my_str_to_word_array(str, delimiter)) == NULL)
        return (84);
    for (int i = 0; tab2[i]; i++) {
        if ((tab3 = my_str_to_word_array(tab2[i], '-')) == NULL)
            return (84);
        if (get_size_array(tab3) == 2)
            for (int j = my_getnbr(tab3[0]) - 1; j < my_getnbr(tab3[1]); j++) {
                if (j < get_size_array(tab)) {
                    my_putstr(tab[j]);
                    if (j + 1 != get_size_array(tab))
                        my_putchar(delimiter);
                }
            }
        else {
            if (my_getnbr(tab3[0]) - 1< get_size_array(tab)) {
                my_putstr(tab[my_getnbr(tab3[0]) - 1]);
                if (my_getnbr(tab3[0]) != get_size_array(tab))
                    my_putchar(delimiter);
            }
        }
    }
    return (0);
}

int display(t_opt **opt)
{
    char *str = NULL;

    while ((str = get_next_line(0)) != NULL) {
        if (opt[0]->activate)
            display_c(str, opt);
        else
            display_f(str, opt);
        free(str);
        write(1, "\n", 1);
    }
    return (0);
}

int minicut(int argc, char **argv)
{
    t_opt **opt = get_arg(argc, argv);

    if (opt == NULL || argc == 1) {
        delete_opt(opt);
        return (84);
    }
    if (verif_arg_opt(opt) == 84) {
        delete_opt(opt);
        return (84);
    }
    display(opt);
    delete_opt(opt);
    return (0);
}
