/*
** EPITECH PROJECT, 2019
** MY_RPG
** File description:
** init_tskills_inventory_scene2
*/

#include "rpg.h"

t_text *create_skills_inventory_scene(t_text *list_text)
{
    sfVector2f pos = {590, 250};
    t_text *name = create_text("SKILLS", "ressources/font/karnivor.ttf",
    pos, 40);
    if (name == NULL)
        return (NULL);
    name->type = TITLE_T;
    list_text = add_text(list_text, name);
    return (list_text);
}

t_text *create_skill6_inventory_scene(t_text *list_text)
{
    sfVector2f pos = {590, 680};
    t_text *intelligence = create_text("Intelligence",
    "ressources/font/karnivor.ttf", pos, 20);
    if (intelligence == NULL)
        return (NULL);
    intelligence->type = TITLE_T;
    list_text = add_text(list_text, intelligence);
    return (list_text);
}

t_text *create_skill7_inventory_scene(t_text *list_text)
{
    sfVector2f pos = {590, 750};
    t_text *defense = create_text("Defense", "ressources/font/karnivor.ttf",
    pos, 20);
    if (defense == NULL)
        return (NULL);
    defense->type = TITLE_T;
    list_text = add_text(list_text, defense);
    return (list_text);
}
