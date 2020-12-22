/*
** EPITECH PROJECT, 2018
** ASM
** File description:
** parse_program_name
*/

#include "vm.h"

int parse_program_name(vm_t *info)
{
    char **array;

    if ((array = put_getline_in_array(info)) == NULL)
        return (-1);
    if (my_strcmp(NAME_CMD_STRING, array[0]) != 0) {
        free_array(array);
        return (-1);
    }
    if (header_recup_info(array[1], info->header->prog_name) == -1)
        return (-1);
    free_array(array);
    return (0);
}
