/*
** EPITECH PROJECT, 2018
** ASM
** File description:
** open_file_stream
*/

#include "asm.h"

FILE *open_file_stream(char *filename, char *mode)
{
    FILE *stream = NULL;

    stream = fopen(filename, mode);
    if (stream == NULL)
        my_printe("Error with fopen\n");
    return (stream);
}
