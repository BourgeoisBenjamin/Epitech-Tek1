/*
** EPITECH PROJECT, 2018
** ASM
** File description:
** get_name_output_file
*/

#include "asm.h"

char *get_name_output_file(char *filename)
{
    char **tab = NULL;
    char *name = NULL;
    char *name_output = NULL;

    tab = my_str_to_word_array(filename, '/');
    if (tab == NULL || get_size_array(tab) <= 0)
        return (NULL);
    name = my_strdup(tab[get_size_array(tab) - 1]);
    free_array(tab);
    tab = my_str_to_word_array(name, '.');
    if (tab == NULL || get_size_array(tab) != 2)
        return (NULL);
    name_output = my_calloc(sizeof(char), my_strlen(tab[0]) + 5);
    my_strcat(name_output, tab[0]);
    my_strcat(name_output, ".cor");
    free_array(tab);
    free(name);
    return (name_output);
}
