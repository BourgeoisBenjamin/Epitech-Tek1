/*
** EPITECH PROJECT, 2019
** MY_RPG
** File description:
** init_objs_fight_scene
*/

#include "rpg.h"

t_game_object *create_damage_fight_scene(t_game_object *list_obj)
{
    sfVector2f pos = {580, 750};
    sfVector2f pos2 = {1180, 750};
    sfIntRect rect = {320, 576, 32, 32};
    t_game_object *damage = create_object("ressources/item/item.png",
    pos, rect, 32);
    t_game_object *damage2 = create_object("ressources/item/item.png",
    pos2, rect, 32);
    sfVector2f scale = {1, 1};

    if (damage == NULL || damage2 == NULL)
        return (NULL);
    damage->type = ENTITIES_O;
    damage2->type = ENTITIES_O;
    sfSprite_setScale(damage->sprite, scale);
    sfSprite_setScale(damage2->sprite, scale);
    if ((list_obj = add_object(list_obj, damage)) == NULL)
        return (NULL);
    if ((list_obj = add_object(list_obj, damage2)) == NULL)
        return (NULL);
    return (list_obj);
}

t_game_object *create_life_fight_scene(t_game_object *list_obj)
{
    sfVector2f pos = {580, 680};
    sfVector2f pos2 = {1180, 680};
    sfIntRect rect = {0, 0, 32, 32};
    t_game_object *life = create_object("ressources/item/heart_min.png",
    pos, rect, 32);
    t_game_object *life2 = create_object("ressources/item/heart_min.png",
    pos2, rect, 32);
    sfVector2f scale = {1, 1};

    if (life == NULL || life2 == NULL)
        return (NULL);
    life->type = ENTITIES_O;
    life2->type = ENTITIES_O;
    sfSprite_setScale(life->sprite, scale);
    sfSprite_setScale(life2->sprite, scale);
    if ((list_obj = add_object(list_obj, life)) == NULL)
        return (NULL);
    if ((list_obj = add_object(list_obj, life2)) == NULL)
        return (NULL);
    return (list_obj);
}

t_game_object *create_backmenu_fight_scene(t_game_object *list_obj)
{
    sfVector2f pos = {520, 600};
    sfIntRect rect = {0, 0, 85, 57};
    sfVector2f resize = {10, 7};
    t_game_object *background = create_object("ressources/UI/fight_back.png",
    pos, rect, 85);

    if (background == NULL)
        return (NULL);
    background->type = BACKGROUND_O;
    sfSprite_setScale(background->sprite, resize);
    if ((list_obj = add_object(list_obj, background)) == NULL)
        return (NULL);
    return (list_obj);
}

t_game_object *create_background_fight_scene(t_game_object *list_obj)
{
    sfVector2f pos = {0, 0};
    sfIntRect rect = {0, 0, 1920, 1080};
    t_game_object *background = create_object("ressources/back/fight.png",
    pos, rect, 1920);

    if (background == NULL)
        return (NULL);
    background->type = BACKGROUND_O;
    if ((list_obj = add_object(list_obj, background)) == NULL)
        return (NULL);
    return (list_obj);
}

t_game_object *init_objs_fight_scene(void)
{
    t_game_object *list_obj = NULL;
    if ((list_obj = create_background_fight_scene(list_obj)) == NULL)
        return (NULL);
    if ((list_obj = create_backmenu_fight_scene(list_obj)) == NULL)
        return (NULL);
    if ((list_obj = create_damage_fight_scene(list_obj)) == NULL)
        return (NULL);
    if ((list_obj = create_life_fight_scene(list_obj)) == NULL)
        return (NULL);
    return (list_obj);
}
