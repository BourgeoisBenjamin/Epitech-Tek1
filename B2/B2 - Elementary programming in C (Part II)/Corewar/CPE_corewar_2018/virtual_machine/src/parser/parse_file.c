/*
** EPITECH PROJECT, 2018
** ASM
** File description:
** parse_file
*/

#include "vm.h"

int find_empty_line_in_array(vm_t **info)
{
    int i = 0;

    while (info[i] != NULL && info[i]->fd != NULL)
        i++;
    if (info[i] == NULL)
        return (-1);
    return (i);
}

void attribute_flag(flag_t *flag_status, vm_t *info, int id)
{
    if (flag_status->flag_a > 0) {
        info->adress = flag_status->flag_a;
        flag_status->flag_a = -1;
    } else
        info->nb = id;
    if (flag_status->flag_n > 0) {
        info->nb = flag_status->flag_n;
        flag_status->flag_n = -1;
    }
}

int get_data(char *filepath, vm_t *info)
{
    FILE *fd = fopen(filepath, "r");
    size_t size = 0;
    char *buffer = NULL;
    int count = 0;

    if (fd == NULL)
        return (-1);
    while (getline(&buffer, &size, fd) > 0)
        count++;
    fclose(fd);
    info->commands = malloc(sizeof(char *) * (count + 1));
    if (!info->commands)
        return (-1);
    for (int i = 0; i <= count; i++)
        info->commands[i] = NULL;
    return (0);
}

int parse_file(char *filepath, vm_t **info, flag_t *flag_status)
{
    static int id = 0;
    int i = 0;

    if (!info)
        return (-1);
    i = find_empty_line_in_array(info);
    if (i == -1)
        return (-1);
    if ((info[i]->fd = get_file(filepath)) == NULL)
        return (-1);
    if (get_data(filepath, info[i]) == -1)
        return (-1);
    attribute_flag(flag_status, info[i], id);
    id++;
    return (0);
}
