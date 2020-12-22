/*
** EPITECH PROJECT, 2018
** ASM
** File description:
** create_header
*/

#include "asm.h"

int get_name_champion(header_t *header, info_file_t *input)
{
    char *line = input->lines->data;
    int i = 0;

    if (my_strcmp(".name", line) != 0)
        return (-1);
    while (line[i] != '"' && line[i] != '\0')
        i++;
    if (line[i] == '\0')
        return (-1);
    i++;
    for (int j = 0; line[i + j] != '"'
        && line[i + j] != '\0' && j < PROG_NAME_LENGTH; j++)
        header->prog_name[j] = line[i + j];
    return (0);
}

int get_comment_champion(header_t *header, info_file_t *input)
{
    char *line = input->lines->next->data;
    int i = 0;

    if (line == NULL)
        return (-1);
    if (my_strcmp(".comment", line) != 0)
        return (-1);
    while (line[i] != '"' && line[i] != '\0')
        i++;
    if (line[i] == '\0')
        return (-1);
    i++;
    for (int j = 0; line[i + j] != '"'
        && line[i + j] != '\0' && j < COMMENT_LENGTH; j++)
        header->comment[j] = line[i + j];
    return (0);
}

int create_header(header_t *header, info_file_t *input)
{
    if (get_name_champion(header, input) == -1)
        return (-1);
    if (get_comment_champion(header, input) == -1)
        return (-1);
    return (0);
}
