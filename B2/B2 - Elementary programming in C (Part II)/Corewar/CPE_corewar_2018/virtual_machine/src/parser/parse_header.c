/*
** EPITECH PROJECT, 2018
** ASM
** File description:
** parse_header
*/

#include "vm.h"

char **put_getline_in_array(vm_t *info)
{
    char *buffer = NULL;
    size_t len = 0;
    int rd = 0;
    char **array;

    if ((rd = getline(&buffer, &len, info->fd)) == -1)
        return (NULL);
    buffer[rd] = '\0';
    if ((array = my_str_to_word_array(buffer, ' ')) == NULL)
        return (NULL);
    if (get_size_array(array) != 2) {
        free_array(array);
        return (NULL);
    }
    free(buffer);
    return (array);
}

int header_recup_info(char *str, char write_here[])
{
    my_strcpy(write_here, str);
    return (0);
}

int parse_header(vm_t *info)
{
    if (parse_program_name(info) == -1)
        return (-1);
    if (parse_comment(info) == -1)
        return (-1);
    return (0);
}
