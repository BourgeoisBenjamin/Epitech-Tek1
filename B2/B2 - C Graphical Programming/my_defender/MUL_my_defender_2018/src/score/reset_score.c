/*
** EPITECH PROJECT, 2019
** MY DEFENDER
** File description:
** reset_score
*/

#include "defender.h"

void reset_score(t_game *game)
{
    free(game->instance->score);
    game->instance->score = my_strdup("0000");
    sfText_setString(game->scenes_array[4]->texts->next->text,
    game->instance->score);
    int fd = open("rsc/score.txt", O_WRONLY, O_CREAT);
    if (fd == -1) {
        my_printe("Unable to reset score\n");
        return;
    }
    if ((write(fd, game->instance->score, my_strlen(game->instance->score)))
    != my_strlen(game->instance->score))
        my_printe("Unable to reset score\n");
    if ((write(fd, "\n", 1)) != 1)
        my_printe("Unable to reset score\n");
    close(fd);
}
