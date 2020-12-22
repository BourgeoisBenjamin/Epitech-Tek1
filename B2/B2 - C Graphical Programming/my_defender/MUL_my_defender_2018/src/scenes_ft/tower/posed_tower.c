/*
** EPITECH PROJECT, 2019
** MY_DEFENDER
** File description:
** posed_tower
*/

#include "defender.h"

int is_in_map(t_game_object *list_obj, sfVector2f pos)
{
    sfVector2f pos_r = {0, 0};
    for (t_game_object *temp = list_obj; temp; temp = temp->next) {
        if (temp->type == GRASS) {
            pos_r = sfSprite_getPosition(temp->sprite);
            if (pos_r.x < pos.x && pos.x < pos_r.x + 90
                && pos_r.y <= pos.y && pos.y < pos_r.y + 90)
                return 1;
        }
    }
    return 0;
}

void posed_tower(t_game *game, t_game_object *temp)
{
    int posed = 0;
    temp->type = TOWER;
    game->scenes_array[1]->objs = add_object(game->scenes_array[1]->objs, temp);
    while (!posed) {
        draw_scene(game->window, game->scenes_array, game->instance->scene);
        sfVector2i pos_cl = sfMouse_getPositionRenderWindow(game->window);
        sfVector2f true_cl = {(float)pos_cl.x, (float)pos_cl.y};
        sfSprite_setPosition(temp->sprite, true_cl);
        if (sfMouse_isButtonPressed(sfMouseLeft)
        && is_in_map(game->scenes_array[1]->objs, true_cl)) {
            posed = 1;
        }
    }
}
