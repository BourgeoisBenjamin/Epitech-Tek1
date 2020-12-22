/*
** EPITECH PROJECT, 2019
** MY RPG
** File description:
** check_action
*/

#include "rpg.h"

int check_action_npc(t_rpg *game)
{
    sfFloatRect npc_p;
    sfFloatRect player_p;

    player_p = sfSprite_getGlobalBounds(game->player->sprite);
    for (t_npc *tmp_npc = game->scenes_array[game->scene]->npc; tmp_npc;
    tmp_npc = tmp_npc->next) {
        npc_p = sfSprite_getGlobalBounds(tmp_npc->sprite);
        if (sfFloatRect_intersects(&player_p, &npc_p, NULL) == sfTrue
        && tmp_npc->type == ENEMY) {
            return (tmp_npc->callback(game, tmp_npc));
        }
        if (sfFloatRect_intersects(&player_p, &npc_p, NULL) == sfTrue
            && sfKeyboard_isKeyPressed(sfKeyE) == true)
            return (tmp_npc->callback(game, tmp_npc));
    }
    return (-1);
}

int check_action(t_rpg *game)
{
    int value;

    if (!(GAME1 <= game->scene && game->scene <= GAME2))
        return (0);
    if ((value = check_action_npc(game)) != -1)
        return (value);
    if ((value = check_action_obj(game)) != -1)
        return (value);
    return (0);
}
