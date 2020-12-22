/*
** EPITECH PROJECT, 2018
** my_runner
** File description:
** is_on_platform
*/

#include <runner.h>

int is_on_platform(t_game *game, t_instance *instance)
{
    sfVector2f pos;
    if (instance->is_jump)
        pos = game->player_jump->start->position;
    else
        pos = game->player->start->position;

    t_game_object *platform = plat_x(pos, game->entities);

    if (platform == NULL || !(plat_y(pos, platform)))
        return 0;
    else
        return 1;
}

int plat_y(sfVector2f pos, t_game_object *platform)
{
    if (platform == NULL)
        return 0;

    if (pos.y + 180 >= platform->position.y - 2
        && pos.y + 180 <= platform->position.y + 20)
        return 1;
    else
        return 0;
}

t_game_object *plat_x(sfVector2f pos, t_list *entities)
{
    for (t_game_object *temp = entities->start;temp;temp = temp->next) {
        if (temp->type == 1) {
            if ((pos.x + 120 > temp->position.x
                && temp->position.x + 189 > pos.x)
                && temp->position.y > pos.y) {
                return temp;
            }
        }
    }
    return NULL;
}