/*
** EPITECH PROJECT, 2018
** my_runner
** File description:
** is_jump
*/

#include <runner.h>

void score(t_game *game, t_instance *instance)
{
    instance->score++;
    char *str = my_itoa(instance->score / 10);
    sfVector2f position = {40, 0};
    game->score = create_score(str, "sprite/font/score.ttf", position, 150);
    free(str);
}