/*
** EPITECH PROJECT, 2019
** MY_RPG
** File description:
** init_objs_conv_scene
*/

#include "rpg.h"

t_game_object *create_background_conv_scene(t_game_object *list_obj)
{
    sfVector2f pos = {0, 0};
    sfIntRect rect = {0, 0, 1920, 1080};
    t_game_object *background = create_object("ressources/back/back_menu.png",
    pos, rect, 1920);

    if (background == NULL)
        return (NULL);
    background->type = BACKGROUND_O;
    if ((list_obj = add_object(list_obj, background)) == NULL)
        return (NULL);
    return (list_obj);
}

t_game_object *init_objs_conv_scene(void)
{
    t_game_object *list_obj = NULL;
    if ((list_obj = create_background_conv_scene(list_obj)) == NULL)
        return (NULL);
    return (list_obj);
}
