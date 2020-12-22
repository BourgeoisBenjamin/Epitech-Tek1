/*
** EPITECH PROJECT, 2019
** MY_RPG
** File description:
** init_objs_inventory_scene2
*/

#include "rpg.h"

t_game_object *create_pt_inv_scene(t_game_object *list_obj)
{
    sfVector2f pos = {1170, 640};
    sfIntRect rect = {480, 192, 32, 32};
    t_game_object *pt = create_object("ressources/item/item.png",
    pos, rect, 32);
    sfVector2f scale = {1, 1};

    if (pt == NULL)
        return (NULL);
    pt->type = ENTITIES_O;
    sfSprite_setScale(pt->sprite, scale);
    if ((list_obj = add_object(list_obj, pt)) == NULL)
        return (NULL);
    return (list_obj);
}

t_game_object *create_damage_inv_scene(t_game_object *list_obj)
{
    sfVector2f pos = {1170, 690};
    sfIntRect rect = {320, 576, 32, 32};
    t_game_object *damage = create_object("ressources/item/item.png",
    pos, rect, 32);
    sfVector2f scale = {1, 1};

    if (damage == NULL)
        return (NULL);
    damage->type = ENTITIES_O;
    sfSprite_setScale(damage->sprite, scale);
    if ((list_obj = add_object(list_obj, damage)) == NULL)
        return (NULL);
    return (list_obj);
}

t_game_object *create_life_inv_scene(t_game_object *list_obj)
{
    sfVector2f pos = {1170, 740};
    sfIntRect rect = {0, 0, 32, 32};
    t_game_object *life = create_object("ressources/item/heart_min.png",
    pos, rect, 32);
    sfVector2f scale = {1, 1};

    if (life == NULL)
        return (NULL);
    life->type = ENTITIES_O;
    sfSprite_setScale(life->sprite, scale);
    if ((list_obj = add_object(list_obj, life)) == NULL)
        return (NULL);
    return (list_obj);
}
