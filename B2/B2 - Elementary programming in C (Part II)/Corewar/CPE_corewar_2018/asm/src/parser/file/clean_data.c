/*
** EPITECH PROJECT, 2018
** ASM
** File description:
** clean_data
*/

#include "asm.h"

void change_tab_to_space(line_t *line)
{
    for (int i = 0; line->data[i]; i++)
        if (line->data[i] == '\t')
            line->data[i] = ' ';
}

void remove_comment_in_line(line_t *line)
{
    int i = 0;

    while (line->data[i] && line->data[i] != COMMENT_CHAR)
        i++;
    while (line->data[i]) {
        line->data[i] = '\0';
        i++;
    }
}

int clean_data(info_file_t *file)
{
    line_t *tmp = file->lines;

    if (tmp == NULL)
        return (0);

    while (tmp) {
        remove_comment_in_line(tmp);
        change_tab_to_space(tmp);
        tmp = tmp->next;
    }
    return (0);
}
