/*
** EPITECH PROJECT, 2019
** parse info
** File description:
** parse info
*/

#include "boggle.h"

int parse_grid(char **av, boggle_t *info, int i)
{
    if (strcmp(av[i], "-g") == 0) {
        if (my_str_isalpha(av[i + 1]) != 1) {
            my_printe("Bad argument\n");
            return (-1);
        }
        if (info->letter != NULL)
            free(info->letter);
        info->letter = strdup(av[i + 1]);
        if (info->letter == NULL)
            return (-1);
    }
    return (0);
}

int parse_size(char **av, boggle_t *info, int i)
{
    if (strcmp(av[i], "-s") == 0) {
        if (my_str_is_num(av[i + 1]) != 1) {
            my_printe("Error with size\n");
            return (-1);
        }
        info->size = atoi(av[i + 1]);
    }
    return (0);
}

int parse_word(char **av, boggle_t *info, int i)
{
    if (strcmp(av[i], "-w") == 0) {
        if (my_str_isalpha(av[i + 1]) != 1) {
            my_printe("Bad argument\n");
            return (-1);
        }
        if (info->word != NULL)
            free(info->word);
        info->word = strdup(av[i + 1]);
        if (info->word == NULL)
            return (-1);
    }
    return (0);
}

int verif_info(boggle_t *info)
{
    if (info->letter == NULL) {
        my_printe("Error: please specify letter with -g\n");
        return (-1);
    }
    if (info->size <= 0) {
        my_printe("Error: size must be greater than 0\n");
        return (-1);
    }
    if (my_strlen(info->letter) != info->size * info->size) {
        my_printe("Error: Incorrect number of characters\n");
        return (-1);
    }
    return (0);
}

int parse_info(int ac, char **av, boggle_t *info)
{
    for (int i = 1; i < ac; i += 2) {
        if (i + 1 == ac) {
            my_printe("Error : bad number of arguments\n");
            return (-1);
        }
        if (parse_size(av, info, i) == -1)
            return (-1);
        if (parse_grid(av, info, i) == -1)
            return (-1);
        if (parse_word(av, info, i) == -1)
            return (-1);
        if (strcmp(av[i], "-s") != 0 && strcmp(av[i], "-g") != 0
        && strcmp(av[i], "-w") != 0) {
            my_printe("Error : bad argument\n");
            return (-1);
        }
    }
    if (verif_info(info) == -1)
        return (-1);
    return (0);
}
