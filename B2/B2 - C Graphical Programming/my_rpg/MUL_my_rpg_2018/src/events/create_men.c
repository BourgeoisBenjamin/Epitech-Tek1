/*
** EPITECH PROJECT, 2019
** MY RPG
** File description:
** create_men
*/

#include "rpg.h"

int create_men(t_rpg *game)
{
    sfIntRect rect = {0, 0, 19, 22};
    stop_all_music(game);
    restart_clock(game->scenes_array[ATTRIB]->clock);
    if ((game->player = make_player(game->player, "ressources/chars/boy.png",
        rect, 133))
        == NULL)
        return (-1);
    if ((game->player->attrib = init_attrib(0)) == NULL)
        return (-1);
    game->old_scene = game->scene;
    updated_text_attrib_scene(game->scenes_array[ATTRIB]->texts, game);
    game->scene = ATTRIB;
    return (0);
}
