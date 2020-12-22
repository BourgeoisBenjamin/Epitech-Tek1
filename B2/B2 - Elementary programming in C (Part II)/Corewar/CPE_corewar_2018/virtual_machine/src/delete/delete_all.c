/*
** EPITECH PROJECT, 2018
** ASM
** File description:
** delete_all
*/

#include "vm.h"

void delete_all(vm_t **info)
{
    for (int i = 0; info[i] != NULL; i++) {
        if (info[i]->fd != NULL)
            fclose(info[i]->fd);
        free(info[i]->header);
        free(info[i]);
    }
    free(info);
}
