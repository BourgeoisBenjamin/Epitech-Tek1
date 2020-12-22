/*
** EPITECH PROJECT, 2019
** MY_RPG
** File description:
** init_objs_intro_scene
*/

#include "rpg.h"

t_game_object *create_background_intro_scene(t_game_object *list_obj)
{
    sfVector2f pos = {0, 0};
    sfIntRect rect = {0, 0, 1920, 1080};
    t_game_object *background = create_object("ressources/back/back_intro.png",
    pos, rect, 1920);

    if (background == NULL)
        return (NULL);
    background->type = BACKGROUND_O;
    if ((list_obj = add_object(list_obj, background)) == NULL)
        return (NULL);
    return (list_obj);
}

t_game_object *create_mask_intro_scene(t_game_object *list_obj)
{
    sfVector2f pos = {0, 0};
    sfColor color = {0, 0, 0, 255};
    sfIntRect rect = {0, 0, 1920, 1080};
    t_game_object *background = create_object("ressources/back/back_intro.png",
    pos, rect, 1920);

    if (background == NULL)
        return (NULL);
    sfSprite_setColor(background->sprite, color);
    background->type = BACKGROUND_O;
    if ((list_obj = add_object(list_obj, background)) == NULL)
        return (NULL);
    return (list_obj);
}

t_game_object *init_objs_intro_scene(void)
{
    t_game_object *list_obj = NULL;
    if ((list_obj = create_background_intro_scene(list_obj)) == NULL)
        return (NULL);
    if ((list_obj = create_mask_intro_scene(list_obj)) == NULL)
        return (NULL);
    return (list_obj);
}
