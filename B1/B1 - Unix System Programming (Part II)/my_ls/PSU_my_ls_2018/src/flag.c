/*
** EPITECH PROJECT, 2019
** my_ls
** File description:
** flag
*/

#include <my_ls.h>

void *init_flag(void)
{
    t_flag *flag = malloc(sizeof(t_flag));

    if (flag == NULL)
        return NULL;

    flag->fl = 0;
    flag->fR = 0;
    flag->fd = 0;
    flag->fr = 0;
    flag->ft = 0;
    flag->j = 0;

    return flag;
}

void what_flag(char arg, t_flag *flag)
{
    switch (arg) {
        case 'l':
            flag->fl = 1;
            break;
        case 'R':
            flag->fR = 1;
            break;
        case 'd':
            flag->fd = 1;
            break;
        case 'r':
            flag->fr = 1;
            break;
        case 't':
            flag->ft = 1;
            break;
        default:
            help(arg, flag);
            break;
    }
}

int get_flags(char **argv, t_flag *flag)
{
    for (int i = 1; argv[i]; i++) {
        if (argv[i][0] == '-') {
            for (int j = 1; argv[i][j]; j++)
                what_flag(argv[i][j], flag);
        }
    }
    for (int i = 1; argv[i]; i++)
        if (argv[i][0] != '-')
            flag->j++;
    return 0;
}