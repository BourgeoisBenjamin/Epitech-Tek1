/*
** EPITECH PROJECT, 2018
** ASM
** File description:
** parser
*/

#include "vm.h"

int check_flag(char *opt, char *arg, vm_t **info, flag_t *flag_status)
{
    char flags[3][5] = {"-dump", "-n", "-a"};

    (void) info;
    if (my_strcmp(opt, flags[0]) == 0 && arg != NULL) {
        my_printf("Dump memory every %d cycle\n", my_getnbr(arg));
        flag_status->flag_dump = my_getnbr(arg);
        return (1);
    }
    if (my_strcmp(opt, flags[1]) == 0 && arg != NULL) {
        flag_status->flag_n = my_getnbr(arg);
        return (1);
    }
    if (my_strcmp(opt, flags[2]) == 0 && arg != NULL) {
        flag_status->flag_a = my_getnbr(arg);
        return (1);
    }
    if (parse_file(opt, info, flag_status) == -1)
        return (-1);
    return (0);
}

int get_flags(char **av, vm_t **info)
{
    int status = 0;
    flag_t flag_status = {-1, -1, -1};

    for (int i = 1; av[i] != NULL; i++) {
        status = check_flag(av[i], av[i + 1], info, &flag_status);
        if (status == -1)
            return (-1);
        else if (status == 1)
            i++;
    }
    return (0);
}

int parse_arg(int argc, char **argv, vm_t **info)
{
    if (parse_nb_arg(argc) == -1)
        return (-1);
    parse_help(argv[1], info);
    if (get_flags(argv, info) == -1)
        return (-1);
    return (0);
}
