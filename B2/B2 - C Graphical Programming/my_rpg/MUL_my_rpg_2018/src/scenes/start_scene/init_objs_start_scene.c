/*
** EPITECH PROJECT, 2019
** MY_RPG
** File description:
** init_objs_start_scene
*/

#include "rpg.h"

t_game_object *create_title_start_scene(t_game_object *list_obj)
{
    sfVector2f pos = {250, 60};
    sfIntRect rect = {0, 0, 717, 94};
    sfVector2f scale = {2, 2};
    t_game_object *title = create_object("ressources/UI/title.png",
    pos, rect, 717);

    if (title == NULL)
        return (NULL);
    title->type = BACKGROUND_O;
    sfSprite_setScale(title->sprite, scale);
    if ((list_obj = add_object(list_obj, title)) == NULL)
        return (NULL);
    return (list_obj);
}

t_game_object *create_background_start_scene(t_game_object *list_obj)
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

t_game_object *init_objs_start_scene(void)
{
    t_game_object *list_obj = NULL;
    if ((list_obj = create_background_start_scene(list_obj)) == NULL)
        return (NULL);
    if ((list_obj = create_title_start_scene(list_obj)) == NULL)
        return (NULL);
    return (list_obj);
}
