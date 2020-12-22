/*
** EPITECH PROJECT, 2019
** MY RPG
** File description:
** create_girl
*/

#include "rpg.h"

int create_girl(t_rpg *game)
{
    sfIntRect rect = {0, 0, 15, 22};
    stop_all_music(game);
    restart_clock(game->scenes_array[ATTRIB]->clock);
    if ((game->player = make_player(game->player, "ressources/chars/girl.png",
        rect, 105))
        == NULL)
        return (-1);
    if ((game->player->attrib = init_attrib(1)) == NULL)
        return (-1);
    game->old_scene = game->scene;
    updated_text_attrib_scene(game->scenes_array[ATTRIB]->texts, game);
    game->scene = ATTRIB;
    return (0);
}
