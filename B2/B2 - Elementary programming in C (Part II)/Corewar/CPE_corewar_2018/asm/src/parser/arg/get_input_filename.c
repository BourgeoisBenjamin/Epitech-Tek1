/*
** EPITECH PROJECT, 2018
** ASM
** File description:
** get_input_filename
*/

#include "asm.h"

char *get_input_filename(char **argv)
{
    char **tab = NULL;
    char *ext = NULL;

    tab = my_str_to_word_array(argv[1], '.');
    if (tab == NULL)
        return (NULL);
    ext = tab[get_size_array(tab) - 1];
    if (my_strcmp(ext, "s") != 0 || my_strlen(ext) != 1) {
        my_printe("Incorrect filename\n");
        free_array(tab);
        return (NULL);
    }
    free_array(tab);
    return (my_strdup(argv[1]));
}
