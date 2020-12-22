/*
** EPITECH PROJECT, 2019
** MY_RPG
** File description:
** create_inventory_scene
*/

#include "rpg.h"

t_scenes **create_inventory_scene(t_rpg *game)
{
    t_game_object *list_obj = init_objs_inventory_scene();
    t_button *list_button = init_buttons_inventory_scene();
    t_text *list_text = init_texts_inventory_scene();
    t_scenes *new_scene = NULL;

    if (list_obj == NULL || list_button == NULL || list_text == NULL)
        return (NULL);

    if ((new_scene = create_scene(list_obj, list_button, list_text, NULL))
        == NULL)
        return (NULL);
    game->scenes_array = add_scene(game->scenes_array, new_scene);
    return (game->scenes_array);
}
