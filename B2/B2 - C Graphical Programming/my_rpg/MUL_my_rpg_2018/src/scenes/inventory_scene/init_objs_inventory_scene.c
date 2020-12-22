/*
** EPITECH PROJECT, 2019
** MY_RPG
** File description:
** init_objs_inventory_scene
*/

#include "rpg.h"

t_game_object *create_backmenu_inventory_scene(t_game_object *list_obj)
{
    sfVector2f pos = {500, 150};
    sfIntRect rect = {0, 0, 92, 77};
    sfVector2f resize = {10, 10};
    t_game_object *background = create_object("ressources/UI/inv_back.png",
    pos, rect, 92);

    if (background == NULL)
        return (NULL);
    background->type = BACKGROUND_O;
    sfSprite_setScale(background->sprite, resize);
    if ((list_obj = add_object(list_obj, background)) == NULL)
        return (NULL);
    return (list_obj);
}

t_game_object *create_background_inventory_scene(t_game_object *list_obj)
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

t_game_object *init_objs_inventory_scene(void)
{
    t_game_object *list_obj = NULL;
    if ((list_obj = create_background_inventory_scene(list_obj)) == NULL)
        return (NULL);
    if ((list_obj = create_backmenu_inventory_scene(list_obj)) == NULL)
        return (NULL);
    if ((list_obj = create_pt_inv_scene(list_obj)) == NULL)
        return (NULL);
    if ((list_obj = create_damage_inv_scene(list_obj)) == NULL)
        return (NULL);
    if ((list_obj = create_life_inv_scene(list_obj)) == NULL)
        return (NULL);
    return (list_obj);
}
