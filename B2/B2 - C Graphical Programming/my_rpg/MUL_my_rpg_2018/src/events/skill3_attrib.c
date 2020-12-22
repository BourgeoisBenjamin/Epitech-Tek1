/*
** EPITECH PROJECT, 2019
** MY RPG
** File description:
** skill3_attrib
*/

#include "rpg.h"

int plus_skill3(t_rpg *game)
{
    if (game->player->attrib->skill_pt > 0) {
        game->player->attrib->dexterity += 1;
        game->player->attrib->skill_pt -= 1;
        updated_text_attrib_scene(game->scenes_array[ATTRIB]->texts, game);
        updated_text_attrib_scene(game->scenes_array[UPDATE_ATTRIB]->texts,
        game);
    }
    update_damage_player(game->player);
    return (0);
}

int minus_skill3(t_rpg *game)
{
    if (game->player->attrib->dexterity > 0) {
        game->player->attrib->dexterity -= 1;
        game->player->attrib->skill_pt += 1;
        updated_text_attrib_scene(game->scenes_array[ATTRIB]->texts, game);
        updated_text_attrib_scene(game->scenes_array[UPDATE_ATTRIB]->texts,
        game);
    }
    update_damage_player(game->player);
    return (0);
}
