/*
** EPITECH PROJECT, 2019
** MY_RPG
** File description:
** create_all_scenes
*/

#include "rpg.h"

t_scenes **create_all_scenes(t_rpg *game)
{
    t_scenes **(*ft_scenes[15])(t_rpg*) = {&create_start_scene,
        &create_settings_scene, &create_pause_scene, &create_player_scene,
        &create_attrib_scene, &create_intro_scene, &create_htp_scene,
        &create_inventory_scene, &create_update_attrib_scene,
        &create_conv_scene, &create_fight_scene, &create_game1_scene,
        &create_game2_scene, &create_end_scene, NULL};

    for (int i = 0; ft_scenes[i]; i++) {
        if ((game->scenes_array = ft_scenes[i](game)) == NULL)
            return (NULL);
    }
    return (game->scenes_array);
}
