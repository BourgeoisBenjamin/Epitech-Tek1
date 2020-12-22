/*
** EPITECH PROJECT, 2018
** ASM
** File description:
** get_file_data
*/

#include "asm.h"

line_t *add_new_line(line_t *lines, int *nb_line, line_t *new)
{
    line_t *tmp = NULL;

    (*nb_line)++;
    if (lines == NULL)
        return (new);
    tmp = lines;
    while (tmp->next)
        tmp = tmp->next;
    tmp->next = new;
    return (lines);
}

line_t *create_new_data_node(char *data)
{
    line_t *new = NULL;

    new = malloc(sizeof(line_t));
    if (new == NULL)
        return (NULL);
    new->data = my_strdup(data);
    new->next = NULL;
    return (new);
}

int transform_data(info_file_t *input, char *data)
{
    line_t *new_line = NULL;

    if (data[0] == COMMENT_CHAR || data[0] == '\n' || data[0] == '\0')
        return (0);
    new_line = create_new_data_node(data);
    if (new_line == NULL)
        return (-1);
    input->lines = add_new_line(input->lines, &input->nb_line, new_line);
    return (0);
}

int get_file_data(info_file_t *input, info_file_t *output)
{
    char *data = NULL;
    size_t len = 0;
    ssize_t read = 0;

    if ((input->stream = open_file_stream(input->filename, "r")) == NULL)
        return (-1);

    while ((read = getline(&data, &len, input->stream)) != -1) {
        if (transform_data(input, data) == -1) {
            free(data);
            return (-1);
        }
        free(data);
        data = NULL;
    }
    free(data);
    if ((output->filename = get_name_output_file(input->filename)) == NULL
        || clean_data(input) == -1)
        return (-1);
    return (0);
}
