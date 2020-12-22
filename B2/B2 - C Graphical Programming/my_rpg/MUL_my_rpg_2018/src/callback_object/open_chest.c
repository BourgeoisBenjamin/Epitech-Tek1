/*
** EPITECH PROJECT, 2018
** my_rpg
** File description:
** open_chest
*/

#include "rpg.h"

int nb_in_inventory(t_game_object *inventory)
{
    t_game_object *tmp = inventory;
    int nb = 0;

    while (tmp != NULL) {
        nb++;
        tmp = tmp->next;
    }
    return (nb);
}

int open_chest(t_rpg *game, t_game_object *obj)
{
    if (game->scene == GAME1
        && game->scenes_array[game->scene]->quest->finish == false)
        return (0);
    if (obj->rect.left != obj->offset &&
    sfKeyboard_isKeyPressed(sfKeyE) == sfTrue) {
        if (nb_in_inventory(game->player->inventory) < 6) {
            game->player->inventory =
            create_skill1_attrib_scene(game->player->inventory);
            move_rect(obj->sprite, &obj->rect, obj->offset, obj->max_value);
        }
    }
    return (0);
}
