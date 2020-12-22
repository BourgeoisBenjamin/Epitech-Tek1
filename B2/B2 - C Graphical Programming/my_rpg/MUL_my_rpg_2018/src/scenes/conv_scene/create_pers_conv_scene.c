/*
** EPITECH PROJECT, 2019
** MY_RPG
** File description:
** init_objs_conv_scene
*/

#include "rpg.h"

t_game_object *create_perso1_conv_scene(t_game_object *list_obj, t_npc *npc)
{
    sfVector2f pos = {200, 200};
    t_game_object *npc_obj = npc_to_obj(npc, pos);

    if (npc_obj == NULL)
        return (NULL);
    if ((list_obj = add_object(list_obj, npc_obj)) == NULL)
        return (NULL);
    return (list_obj);
}

t_game_object *create_perso2_conv_scene(t_game_object *list_obj,
t_player *player)
{
    sfVector2f pos = {1500, 800};
    t_game_object *player_obj = player_to_obj(player, pos);

    if (player_obj == NULL)
        return (NULL);
    if ((list_obj = add_object(list_obj, player_obj)) == NULL)
        return (NULL);
    return (list_obj);
}
