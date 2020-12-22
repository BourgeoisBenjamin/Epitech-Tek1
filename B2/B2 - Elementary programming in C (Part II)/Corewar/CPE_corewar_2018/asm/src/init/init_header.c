/*
** EPITECH PROJECT, 2018
** ASM
** File description:
** init_header
*/

#include "asm.h"

header_t *init_header(void)
{
    header_t *new = NULL;

    new = malloc(sizeof(header_t));
    if (new == NULL)
        return (NULL);
    new->magic = COREWAR_EXEC_MAGIC;
    new->magic = LITTLETOBIG(new->magic);
    my_memset(new->prog_name, 0, PROG_NAME_LENGTH + 1);
    new->prog_size = 0;
    my_memset(new->comment, 0, COMMENT_LENGTH + 1);

    return (new);
}
