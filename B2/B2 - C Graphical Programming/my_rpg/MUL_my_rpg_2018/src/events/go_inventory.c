/*
** EPITECH PROJECT, 2019
** MY RPG
** File description:
** go_inventory
*/

#include "rpg.h"

int go_inventory(t_rpg *game)
{
    if (game->scene == INVENTORY)
        return (close_inventory(game));
    if (!(GAME1 <= game->scene && game->scene <= GAME2))
        return (0);
    if ((game->scenes_array[INVENTORY]->objs = init_player_inv_scene(game->
        scenes_array[INVENTORY]->objs, game->player)) == NULL)
        return (-1);
    if (add_tmp_inventory_scene(game->scenes_array[INVENTORY],
        game->player) == -1)
        return (-1);
    restart_clock(game->scenes_array[INVENTORY]->clock);
    game->old_scene = game->scene;
    game->scene = INVENTORY;
    return (0);
}
