/*
** EPITECH PROJECT, 2019
** MY RPG
** File description:
** delete_obj1_inv
*/

#include "rpg.h"

int delete_obj1_inv(t_rpg *game)
{
    int i = 1;
    for (t_game_object *tmp = game->player->inventory; tmp;
    tmp = tmp->next, i++) {
        if (i == 1) {
            game->player->inventory = delete_obj(game->player->inventory, tmp);
            break;
        }
        if (tmp->next == NULL) {
            game->player->inventory = delete_obj(game->player->inventory, tmp);
            break;
        }
    }
    delete_tmp_inventory_scene(game->scenes_array[INVENTORY]);
    if ((game->scenes_array[INVENTORY]->objs = init_player_inv_scene(game->
        scenes_array[INVENTORY]->objs, game->player)) == NULL)
        return (-1);
    if (add_tmp_inventory_scene(game->scenes_array[INVENTORY],
        game->player) == -1)
        return (-1);
    return (0);
}

int delete_obj2_inv(t_rpg *game)
{
    int i = 1;
    for (t_game_object *tmp = game->player->inventory; tmp;
    tmp = tmp->next, i++) {
        if (i == 2) {
            game->player->inventory = delete_obj(game->player->inventory, tmp);
            break;
        }
        if (tmp->next == NULL) {
            game->player->inventory = delete_obj(game->player->inventory, tmp);
            break;
        }
    }
    delete_tmp_inventory_scene(game->scenes_array[INVENTORY]);
    if ((game->scenes_array[INVENTORY]->objs = init_player_inv_scene(game->
        scenes_array[INVENTORY]->objs, game->player)) == NULL)
        return (-1);
    if (add_tmp_inventory_scene(game->scenes_array[INVENTORY],
        game->player) == -1)
        return (-1);
    return (0);
}

int delete_obj3_inv(t_rpg *game)
{
    int i = 1;
    for (t_game_object *tmp = game->player->inventory; tmp;
    tmp = tmp->next, i++) {
        if (i == 3) {
            game->player->inventory = delete_obj(game->player->inventory, tmp);
            break;
        }
        if (tmp->next == NULL) {
            game->player->inventory = delete_obj(game->player->inventory, tmp);
            break;
        }
    }
    delete_tmp_inventory_scene(game->scenes_array[INVENTORY]);
    if ((game->scenes_array[INVENTORY]->objs = init_player_inv_scene(game->
        scenes_array[INVENTORY]->objs, game->player)) == NULL)
        return (-1);
    if (add_tmp_inventory_scene(game->scenes_array[INVENTORY],
        game->player) == -1)
        return (-1);
    return (0);
}
