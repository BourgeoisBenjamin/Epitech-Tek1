/*
** EPITECH PROJECT, 2018
** my_rpg
** File description:
** go_to_scene2
*/

#include "rpg.h"

void go_to_next_scene_for_game1(t_rpg *game)
{
    int nb = 1;
    t_quest *tmp;

    tmp = game->scenes_array[game->scene]->quest;
    while (tmp->finish == true && tmp->next != NULL) {
        nb++;
        tmp = tmp->next;
    }
    if (nb == 4)
        start_game2(game);
}

void go_to_credit(t_rpg *game)
{
    int nb = 1;
    t_quest *tmp;

    tmp = game->scenes_array[game->scene]->quest;
    while (tmp->finish == true && tmp->next != NULL) {
        nb++;
        tmp = tmp->next;
    }
    if (nb == 5)
        go_end(game);
}

int go_to_next_scene(t_rpg *game, t_game_object *obj)
{
    (void)obj;
    if (game->scene == GAME1)
        go_to_next_scene_for_game1(game);
    if (game->scene == GAME2)
        go_to_credit(game);
    return (0);
}
