/*
** EPITECH PROJECT, 2019
** MY_RPG
** File description:
** init_tskills_inventory_scene
*/

#include "rpg.h"

t_text *create_skill1_inventory_scene(t_text *list_text)
{
    sfVector2f pos = {590, 330};
    t_text *charisme = create_text("Charisme", "ressources/font/karnivor.ttf",
    pos, 20);
    if (charisme == NULL)
        return (NULL);
    charisme->type = TITLE_T;
    list_text = add_text(list_text, charisme);
    return (list_text);
}

t_text *create_skill2_inventory_scene(t_text *list_text)
{
    sfVector2f pos = {590, 400};
    t_text *strenght = create_text("Strenght", "ressources/font/karnivor.ttf",
    pos, 20);
    if (strenght == NULL)
        return (NULL);
    strenght->type = TITLE_T;
    list_text = add_text(list_text, strenght);
    return (list_text);
}

t_text *create_skill3_inventory_scene(t_text *list_text)
{
    sfVector2f pos = {590, 470};
    t_text *dexterity = create_text("Dexterity", "ressources/font/karnivor.ttf",
    pos, 20);
    if (dexterity == NULL)
        return (NULL);
    dexterity->type = TITLE_T;
    list_text = add_text(list_text, dexterity);
    return (list_text);
}

t_text *create_skill4_inventory_scene(t_text *list_text)
{
    sfVector2f pos = {590, 540};
    t_text *constitution = create_text("Constitution",
    "ressources/font/karnivor.ttf", pos, 20);
    if (constitution == NULL)
        return (NULL);
    constitution->type = TITLE_T;
    list_text = add_text(list_text, constitution);
    return (list_text);
}

t_text *create_skill5_inventory_scene(t_text *list_text)
{
    sfVector2f pos = {590, 610};
    t_text *luck = create_text("Luck", "ressources/font/karnivor.ttf",
    pos, 20);
    if (luck == NULL)
        return (NULL);
    luck->type = TITLE_T;
    list_text = add_text(list_text, luck);
    return (list_text);
}
