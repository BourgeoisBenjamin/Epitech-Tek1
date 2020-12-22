/*
** EPITECH PROJECT, 2019
** MY DEFENDER
** File description:
** save_score
*/

#include "defender.h"

void save_score(t_instance *instance, char *score)
{
    int best_score = my_getnbr(instance->score);
    int best_new_score = my_getnbr(score);
    if (best_new_score <= best_score)
        return;
    free(instance->score);
    instance->score = my_strdup(score);
    free(score);
    int fd = open("rsc/score.txt", O_WRONLY, O_CREAT);
    if (fd == -1) {
        my_printe("Unable to save score\n");
        return;
    }
    if ((write(fd, instance->score, my_strlen(instance->score)))
    != my_strlen(instance->score))
        my_printe("Unable to save score\n");
    if ((write(fd, "\n", 1)) != 1)
        my_printe("Unable to reset score\n");
    close(fd);
}
