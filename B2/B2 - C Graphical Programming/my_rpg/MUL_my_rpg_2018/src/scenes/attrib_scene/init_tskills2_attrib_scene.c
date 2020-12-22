/*
** EPITECH PROJECT, 2019
** MY_RPG
** File description:
** init_tskills2_attrib_scene
*/

#include "rpg.h"

t_text *create_tskill5_attrib_scene(t_text *list_text)
{
    sfVector2f pos = {500, 300};
    t_text *luck = create_text("LUCK",
    "ressources/font/karnivor.ttf", pos, 30);
    luck->type = TITLE_T;
    if (luck == NULL)
        return (NULL);
    list_text = add_text(list_text, luck);

    sfVector2f pos2 = {620, 300};
    t_text *luck_pt = create_text("0",
    "ressources/font/karnivor.ttf", pos2, 30);
    luck_pt->type = TITLE_T;
    if (luck_pt == NULL)
        return (NULL);
    list_text = add_text(list_text, luck_pt);
    return (list_text);
}

t_text *create_tskill6_attrib_scene(t_text *list_text)
{
    sfVector2f pos = {800, 300};
    t_text *intelligence = create_text("INTELLIGENCE",
    "ressources/font/karnivor.ttf", pos, 30);
    intelligence->type = TITLE_T;
    if (intelligence == NULL)
        return (NULL);
    list_text = add_text(list_text, intelligence);

    sfVector2f pos2 = {1070, 300};
    t_text *intelligence_pt = create_text("0",
    "ressources/font/karnivor.ttf", pos2, 30);
    intelligence_pt->type = TITLE_T;
    if (intelligence_pt == NULL)
        return (NULL);
    list_text = add_text(list_text, intelligence_pt);
    return (list_text);
}

t_text *create_tskill7_attrib_scene(t_text *list_text)
{
    sfVector2f pos = {1200, 300};
    t_text *defense = create_text("DEFENSE",
    "ressources/font/karnivor.ttf", pos, 30);
    defense->type = TITLE_T;
    if (defense == NULL)
        return (NULL);
    list_text = add_text(list_text, defense);

    sfVector2f pos2 = {1400, 300};
    t_text *defense_pt = create_text("0",
    "ressources/font/karnivor.ttf", pos2, 30);
    defense_pt->type = TITLE_T;
    if (defense_pt == NULL)
        return (NULL);
    list_text = add_text(list_text, defense_pt);
    return (list_text);
}
