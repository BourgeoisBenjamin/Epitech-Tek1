/*
** EPITECH PROJECT, 2018
** ASM
** File description:
** parse_comment
*/

#include "vm.h"

int parse_comment(vm_t *info)
{
    char **array;

    if ((array = put_getline_in_array(info)) == NULL)
        return (-1);
    if (my_strcmp(COMMENT_CMD_STRING, array[0]) != 0) {
        free_array(array);
        return (-1);
    }
    if (header_recup_info(array[1], info->header->comment) == -1)
        return (-1);
    free_array(array);
    return (0);
}
