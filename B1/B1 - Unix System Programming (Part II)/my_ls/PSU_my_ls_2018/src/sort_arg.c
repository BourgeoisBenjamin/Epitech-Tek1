/*
** EPITECH PROJECT, 2019
** my_ls
** File description:
** sort_arg
*/

#include <my_ls.h>

int sort_arg(char **argv, t_flag *flag)
{
    int j = 0;
    for (int i = 1; argv[i]; i++) {
        if (argv[i][0] == '-')
            continue;
        else {
            if (my_ls(argv[i], flag) != 0)
                return 1;
            j++;
        }
    }
    if (j == 0) {
        if (my_ls(".", flag) != 0)
            return 1;
    }
    return 0;
}