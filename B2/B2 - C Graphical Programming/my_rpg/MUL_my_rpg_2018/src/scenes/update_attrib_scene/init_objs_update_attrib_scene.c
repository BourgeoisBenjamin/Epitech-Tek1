/*
** EPITECH PROJECT, 2019
** MY_RPG
** File description:
** init_objs_update_attrib_scene
*/

#include "rpg.h"

t_game_object *create_background_update_attrib_scene(t_game_object *list_obj)
{
    sfVector2f pos = {0, 0};
    sfIntRect rect = {0, 0, 1920, 1080};
    t_game_object *background = create_object("ressources/back/green.png",
    pos, rect, 1920);

    if (background == NULL)
        return (NULL);
    background->type = BACKGROUND_O;
    if ((list_obj = add_object(list_obj, background)) == NULL)
        return (NULL);
    return (list_obj);
}

t_game_object *init_objs_update_attrib_scene(void)
{
    t_game_object *list_obj = NULL;
    if ((list_obj = create_background_update_attrib_scene(list_obj)) == NULL)
        return (NULL);
    if ((list_obj = create_skill1_attrib_scene(list_obj)) == NULL)
        return (NULL);
    if ((list_obj = create_skill2_attrib_scene(list_obj)) == NULL)
        return (NULL);
    if ((list_obj = create_skill3_attrib_scene(list_obj)) == NULL)
        return (NULL);
    if ((list_obj = create_skill4_attrib_scene(list_obj)) == NULL)
        return (NULL);
    return (list_obj);
}
