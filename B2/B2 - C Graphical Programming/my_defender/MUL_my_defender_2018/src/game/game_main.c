/*
** EPITECH PROJECT, 2019
** MY_DEFENDER
** File description:
** game_main
*/

#include "defender.h"

void game_main(t_game *game)
{
    if (game->instance->scene == 0)
        manage_menu(game);
    if (game->instance->scene == 1) {
        manage_move(game);
        manage_game(game->scenes_array[1], game->instance);
    }
    if (game->instance->life <= 0
    || number_enemy(game->scenes_array[1]->objs) < 1) {
        save_score(game->instance, my_itoa(game->instance->life));
        sfText_setString(game->scenes_array[5]->texts->next->next->text,
        my_itoa(game->instance->life));
        sfText_setString(game->scenes_array[5]->texts->next
        ->next->next->next->text, game->instance->score);
        if (game->instance->life <= 0)
            sfText_setString(game->scenes_array[5]->texts->text, "YOU LOOSE");
        game->instance->scene = 5;
    }
}
