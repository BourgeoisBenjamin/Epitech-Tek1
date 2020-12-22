/*
** EPITECH PROJECT, 2018
** my_params_to_array.c
** File description:
** Task03 of Pool Day09
*/

#include <my.h>
#include <stdlib.h>

struct info_param *my_params_to_array(int ac, char **av)
{
    struct info_param **result_table;
    struct info_param result_table = malloc(sizeof(struct info_param*) + 1);

    if (result_table == 0) {
        return NULL;
    }

    for (int index = 0; index < ac; index++) {
        result_table[index] = malloc(sizeof(struct info_param));
        result_table[index]->length = my_strlen(av[index]);
        result_table[index]->str = av[index];
        result_table[index]->copy = my_strcpy(av[index]);
        result_table[index]->word_array = my_str_to_word_array(av[index]);
        index++;
    }
    result_table[index]->str = NULL;
    return *result_table;
}
