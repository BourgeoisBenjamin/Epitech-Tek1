/*
** EPITECH PROJECT, 2019
** COREWAR
** File description:
** parse_arg
*/

#include "corewar.h"

int parse_help(char **argv, corewar_t *info, int i)
{
    if (my_strcmp(argv[i], "-h") == 0 && my_strlen(argv[i]) == 2) {
        display_help();
        delete_all(info);
        exit(0);
    }
    return (0);
}

void display_help(void)
{
    my_printf("USAGE\n");
    my_printf("\t./corewar [-dump nbr_cycle] [[-n prog_number]");
    my_printf("[-a load_adress] prog_name] ...\n\n");
    my_printf("DESCRIPTION\n");
    my_printf("\t-dump nbr_cycle dumps the memory after the nbr_cycle");
    my_printf("execution (if the round isn’t\n\t\t\t");
    my_printf("already over) with the following format: 32 bytes/line in\n\t");
    my_printf("\t\thexadecimal (A0BCDEFE1DD3...)\n");
    my_printf("\t-n prog_number  sets the next program’s number. By default,");
    my_printf("the first free number\n\t\t\tin the parameter order\n");
    my_printf("\t-a load_adress  sets the next program’s loading address.");
    my_printf("When no address is\n\t\t\tspecified, optimize the addresses so");
    my_printf(" that the processes are as far\n\t\t\taway from each other as ");
    my_printf("possible. The addresses are MEM_SIZE modulo\n");
}
