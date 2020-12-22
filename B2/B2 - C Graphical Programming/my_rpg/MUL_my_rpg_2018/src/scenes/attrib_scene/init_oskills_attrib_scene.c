/*
** EPITECH PROJECT, 2019
** MY_RPG
** File description:
** init_oskills_attrib_scene
*/

#include "rpg.h"

t_game_object *create_skill1_attrib_scene(t_game_object *list_obj)
{
    sfVector2f pos = {100, 400};
    sfIntRect rect = {32, 416, 32, 32};
    t_game_object *skill = create_object("ressources/item/item.png",
    pos, rect, 32);
    sfVector2f scale = {7, 7};

    if (skill == NULL)
        return (NULL);
    skill->type = ENTITIES_O;
    sfSprite_setScale(skill->sprite, scale);
    if ((list_obj = add_object(list_obj, skill)) == NULL)
        return (NULL);
    return (list_obj);
}

t_game_object *create_skill2_attrib_scene(t_game_object *list_obj)
{
    sfVector2f pos = {570, 400};
    sfIntRect rect = {64, 416, 32, 32};
    t_game_object *skill = create_object("ressources/item/item.png",
    pos, rect, 32);
    sfVector2f scale = {7, 7};

    if (skill == NULL)
        return (NULL);
    skill->type = ENTITIES_O;
    sfSprite_setScale(skill->sprite, scale);
    if ((list_obj = add_object(list_obj, skill)) == NULL)
        return (NULL);
    return (list_obj);
}

t_game_object *create_skill3_attrib_scene(t_game_object *list_obj)
{
    sfVector2f pos = {1080, 400};
    sfIntRect rect = {96, 416, 32, 32};
    t_game_object *skill = create_object("ressources/item/item.png",
    pos, rect, 32);
    sfVector2f scale = {7, 7};

    if (skill == NULL)
        return (NULL);
    skill->type = ENTITIES_O;
    sfSprite_setScale(skill->sprite, scale);
    if ((list_obj = add_object(list_obj, skill)) == NULL)
        return (NULL);
    return (list_obj);
}

t_game_object *create_skill4_attrib_scene(t_game_object *list_obj)
{
    sfVector2f pos = {1520, 400};
    sfIntRect rect = {128, 416, 32, 32};
    t_game_object *skill = create_object("ressources/item/item.png",
    pos, rect, 32);
    sfVector2f scale = {7, 7};

    if (skill == NULL)
        return (NULL);
    skill->type = ENTITIES_O;
    sfSprite_setScale(skill->sprite, scale);
    if ((list_obj = add_object(list_obj, skill)) == NULL)
        return (NULL);
    return (list_obj);
}
