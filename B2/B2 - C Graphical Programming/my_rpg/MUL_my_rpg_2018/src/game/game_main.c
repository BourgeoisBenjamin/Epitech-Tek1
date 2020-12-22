/*
** EPITECH PROJECT, 2019
** MY_RPG
** File description:
** game_main
*/

#include "rpg.h"

int game_main(t_rpg *game)
{
    if (game->scene == INTRO) {
        return (manage_intro(game));
    }
    if (GAME1 <= game->scene && game->scene <= GAME2) {
        quest_management_scene1(game);
        quest_management_scene2(game);
        manage_npc(game->scenes_array[game->scene]->npc,
        game->scenes_array[game->scene]->clock);
        update_damage_player(game->player);
        update_life_player(game->player);
        return (check_action(game));
    }
    if (game->scene == CONV_SCENE)
        manage_conv_scene(game, game->scenes_array[CONV_SCENE], game->window);
    return (0);
}
