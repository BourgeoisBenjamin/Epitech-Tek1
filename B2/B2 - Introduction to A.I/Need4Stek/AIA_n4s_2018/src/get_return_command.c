/*
** EPITECH PROJECT, 2019
** NEED4STEK
** File description:
** get_return_command
*/

#include "n4s.h"

char **get_return_command(void)
{
    char *output = NULL;
    char **output_array = NULL;
    if ((output = get_next_line(0)) == NULL) {
        my_printe("Error: get_next_line() failed\n");
        return (NULL);
    }
    if ((output_array = my_str_to_word_array(output, ':')) == NULL) {
        my_printe("Error: my_str_to_word_array() failed\n");
        free(output);
        return (NULL);
    }
    free(output);
    return (output_array);
}
