/*
** EPITECH PROJECT, 2019
** MY RPG
** File description:
** start_game2
*/

#include "rpg.h"

void prepare_quest_game2(t_game_object *list_obj)
{
    sfVector2f pos1 = {1097, 692};
    sfVector2f pos2 = {1097, 1144};
    sfIntRect rect = {20, 0, 20, 20};
    sfVector2f scale = {3, 3};
    t_game_object *tmp;

    tmp = create_object("./ressources/decorations/obj.png", pos1,
    rect, 60);
    sfSprite_setScale(tmp->sprite, scale);
    tmp->type = OBJ_O;
    tmp->quest = 1;
    list_obj = add_object(list_obj, tmp);
    tmp = create_object("./ressources/decorations/obj.png", pos2,
    rect, 60);
    sfSprite_setScale(tmp->sprite, scale);
    tmp->type = OBJ_O;
    tmp->quest = 2;
    list_obj = add_object(list_obj, tmp);
}

int start_game2(t_rpg *game)
{
    stop_all_music(game);
    restart_clock(game->scenes_array[GAME2]->clock);
    game->player->position.x = 20;
    game->player->position.y = 260;
    game->old_scene = game->scene;
    game->actual_game = GAME2;
    game->scene = GAME2;
    prepare_quest_game2(game->scenes_array[game->scene]->objs);
    return (0);
}
