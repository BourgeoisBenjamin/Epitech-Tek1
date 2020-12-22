/*
** EPITECH PROJECT, 2018
** ASM
** File description:
** init_info_file_t
*/

#include "asm.h"

info_file_t *init_info_file(void)
{
    info_file_t *new = NULL;

    new = malloc(sizeof(info_file_t));
    if (new == NULL)
        return (NULL);
    new->stream = NULL;
    new->fd = 0;
    new->nb_line = 0;
    new->filename = NULL;
    new->lines = NULL;

    return (new);
}
