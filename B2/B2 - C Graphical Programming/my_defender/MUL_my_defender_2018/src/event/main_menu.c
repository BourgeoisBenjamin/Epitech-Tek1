/*
** EPITECH PROJECT, 2019
** MY_DEFENDER
** File description:
** main_menu
*/

#include "defender.h"

void main_menu(t_game *game)
{
    if (game->instance->score)
        free(game->instance->score);
    free(game->instance);
    free_scenes(game->scenes_array);
    delete_list_musics(game->musics);
    game->instance = malloc(sizeof(t_instance));
    game->scenes_array = init_scene_array();
    init_main_music(game);
    init_instance(game->instance);
    init_main_menu(game);
    create_first_map(game);
    init_pause_menu(game);
    init_htp_menu(game);
    init_score(game);
    init_end(game);
}
