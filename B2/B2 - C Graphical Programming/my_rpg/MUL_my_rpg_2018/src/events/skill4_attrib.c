/*
** EPITECH PROJECT, 2019
** MY RPG
** File description:
** skill4_attrib
*/

#include "rpg.h"

int plus_skill4(t_rpg *game)
{
    if (game->player->attrib->skill_pt > 0) {
        game->player->attrib->constitution += 1;
        game->player->attrib->skill_pt -= 1;
        updated_text_attrib_scene(game->scenes_array[ATTRIB]->texts, game);
        updated_text_attrib_scene(game->scenes_array[UPDATE_ATTRIB]->texts,
        game);
    }
    update_damage_player(game->player);
    return (0);
}

int minus_skill4(t_rpg *game)
{
    if (game->player->attrib->constitution > 0) {
        game->player->attrib->constitution -= 1;
        game->player->attrib->skill_pt += 1;
        updated_text_attrib_scene(game->scenes_array[ATTRIB]->texts, game);
        updated_text_attrib_scene(game->scenes_array[UPDATE_ATTRIB]->texts,
        game);
    }
    update_damage_player(game->player);
    return (0);
}
