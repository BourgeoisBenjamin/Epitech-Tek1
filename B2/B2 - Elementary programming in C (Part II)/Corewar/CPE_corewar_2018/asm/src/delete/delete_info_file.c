/*
** EPITECH PROJECT, 2018
** ASM
** File description:
** delete_info_file
*/

#include "asm.h"

void delete_line(line_t *line)
{
    if (!line)
        return;
    if (line->data)
        free(line->data);
    free(line);
}

void delete_file_data(line_t *lines)
{
    line_t *current = lines;
    line_t *next = NULL;
    if (lines == NULL)
        return;

    while (current != NULL) {
        next = current->next;
        delete_line(current);
        current = next;
    }
}

void delete_info_file(info_file_t *file)
{
    if (!file)
        return;
    if (file->stream)
        fclose(file->stream);
    if (file->filename)
        free(file->filename);
    delete_file_data(file->lines);
    free(file);
}
