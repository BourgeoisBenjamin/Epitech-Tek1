/*
** EPITECH PROJECT, 2018
** ASM
** File description:
** usage
*/

#include "my.h"

void usage(void)
{
    my_printf("USAGE\n\t./corewar [-dump nbr_cycle] [[-n prog_number] ");
    my_printf("[-a load_address] prog_name] ...\n\n");
    my_printf("DESCRIPTION\n\t-dump nbr_cycle dumps the memory after ");
    my_printf("the nbr_cycle execution (if the round isn’t\n");
    my_printf("\t\t\talready over) with the following format: ");
    my_printf("32 bytes/line in\n");
    my_printf("\t\t\thexadecimal (A0BCDEFE1DD3...)\n");
    my_printf("\t-n prog_number sets the next program’s number. ");
    my_printf("By default, the first free number\n");
    my_printf("\t\t\tin the parameter order\n");
    my_printf("\t-a load_address sets the next program’s ");
    my_printf("loading address. When no address is\n");
    my_printf("\t\t\tspecified, optimize the addresses ");
    my_printf("so that the processes are as far\n");
    my_printf("\t\t\taway from each other as possible. ");
    my_printf("The addresses are MEM_SIZE modulo\n");
}
