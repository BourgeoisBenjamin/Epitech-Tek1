/*
** EPITECH PROJECT, 2018
** ASM
** File description:
** init_asm
*/

#include "vm.h"

vm_t *init_vm(void)
{
    vm_t *info = malloc(sizeof(vm_t));

    if (info == NULL)
        return (NULL);
    info->header = malloc(sizeof(header_t));
    if (info->header == NULL) {
        free(info);
        return (NULL);
    }
    info->fd = NULL;
    return (info);
}
