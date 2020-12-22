/*
** EPITECH PROJECT, 2019
** LINGO
** File description:
** lingo
*/

#include "lingo.h"

int lingo(int argc, char **argv)
{
    char **tab = get_file(argc, argv);

    if (tab == NULL)
        return (84);
    if (check_words(tab) == -1) {
        free_array(tab);
        return (84);
    }
    if (game(tab) == -1) {
        free_array(tab);
        return (84);
    }
    free_array(tab);
    return (0);
}
