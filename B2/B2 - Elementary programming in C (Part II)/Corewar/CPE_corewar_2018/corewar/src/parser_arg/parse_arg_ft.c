/*
** EPITECH PROJECT, 2019
** COREWAR
** File description:
** parse_arg
*/

#include "corewar.h"

int parse_loadaddress(char **argv, corewar_t *info, int i)
{
    if (my_strcmp(argv[i], "-a") == 0 && my_strlen(argv[i]) == 2) {
        if (!my_str_is_num(argv[i + 1]))
            return (-1);
        info->load_adress = my_getnbr(argv[i + 1]);
    }
    return (0);
}

int parse_prognumber(char **argv, corewar_t *info, int i)
{
    if (my_strcmp(argv[i], "-n") == 0 && my_strlen(argv[i]) == 2) {
        if (!my_str_is_num(argv[i + 1]))
            return (-1);
        info->prog_number = my_getnbr(argv[i + 1]);
    }
    return (0);
}

int parse_cycle(char **argv, corewar_t *info, int i)
{
    if (my_strcmp(argv[i], "-dump") == 0 && my_strlen(argv[i]) == 5) {
        if (!my_str_is_num(argv[i + 1]))
            return (-1);
        info->dump = my_getnbr(argv[i + 1]);
    }
    return (0);
}

int parse_name(char **argv, corewar_t *info, int i)
{
    if (argv[i][0] == '-')
        return (0);
    info->name = my_strdup(argv[i]);
    return (1);
}

int wrong_argument(char **argv, int i)
{
    if (!((my_strcmp(argv[i], "-dump") == 0 && my_strlen(argv[i]) == 5)
    || (my_strcmp(argv[i], "-n") == 0 && my_strlen(argv[i]) == 2)
    || (my_strcmp(argv[i], "-a") == 0 && my_strlen(argv[i]) == 2))) {
        my_printe("Error : bad argument\nType ./corewar -h to see usage\n");
        return (1);
    }
    return (0);
}
