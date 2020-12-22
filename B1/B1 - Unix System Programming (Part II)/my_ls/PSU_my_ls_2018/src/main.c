/*
** EPITECH PROJECT, 2019
** my_ls
** File description:
** main
*/

#include "my_ls.h"

int main(int argc, char **argv)
{
    (void)argc;
    t_flag *flag = init_flag();
    if (flag == NULL) {
        perror("Malloc");
        return 84;
    }
    get_flags(argv, flag);

    if (sort_arg(argv, flag) != 0) {
        free(flag);
        return 0;
    }
    free(flag);
    return 0;
}