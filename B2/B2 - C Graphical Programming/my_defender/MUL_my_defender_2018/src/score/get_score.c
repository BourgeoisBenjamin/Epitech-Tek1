/*
** EPITECH PROJECT, 2019
** MY DEFENDER
** File description:
** get_score
*/

#include "defender.h"

char *get_score(void)
{
    int fd = open("rsc/score.txt", O_RDONLY);
    if (fd == -1)
        return (NULL + my_printe("[SCORE] Unable to open score file\n"));
    char *score = get_next_line(fd);
    close(fd);
    if (score == NULL || !my_str_is_num(score)) {
        free(score);
        my_printe("[SCORE] Score is not a valid score\n");
        return (NULL);
    }
    return (score);
}
