/*
** EPITECH PROJECT, 2019
** MY_RPG
** File description:
** init_tskills_attrib_scene
*/

#include "rpg.h"

t_text *create_tskill1_attrib_scene(t_text *list_text)
{
    sfVector2f pos = {100, 700};
    t_text *charisme = create_text("CHARISME",
    "ressources/font/karnivor.ttf", pos, 30);
    charisme->type = TITLE_T;
    if (charisme == NULL)
        return (NULL);
    list_text = add_text(list_text, charisme);

    sfVector2f pos2 = {300, 700};
    t_text *charisme_pt = create_text("0",
    "ressources/font/karnivor.ttf", pos2, 30);
    charisme_pt->type = TITLE_T;
    if (charisme_pt == NULL)
        return (NULL);
    list_text = add_text(list_text, charisme_pt);
    return (list_text);
}

t_text *create_tskill2_attrib_scene(t_text *list_text)
{
    sfVector2f pos = {560, 700};
    t_text *strenght = create_text("STRENGHT",
    "ressources/font/karnivor.ttf", pos, 30);
    strenght->type = TITLE_T;
    if (strenght == NULL)
        return (NULL);
    list_text = add_text(list_text, strenght);

    sfVector2f pos2 = {780, 700};
    t_text *strenght_pt = create_text("0",
    "ressources/font/karnivor.ttf", pos2, 30);
    strenght_pt->type = TITLE_T;
    if (strenght_pt == NULL)
        return (NULL);
    list_text = add_text(list_text, strenght_pt);
    return (list_text);
}

t_text *create_tskill3_attrib_scene(t_text *list_text)
{
    sfVector2f pos = {1060, 700};
    t_text *dexterity = create_text("DEXTERITY",
    "ressources/font/karnivor.ttf", pos, 30);
    dexterity->type = TITLE_T;
    if (dexterity == NULL)
        return (NULL);
    list_text = add_text(list_text, dexterity);

    sfVector2f pos2 = {1290, 700};
    t_text *dexterity_pt = create_text("0",
    "ressources/font/karnivor.ttf", pos2, 30);
    dexterity_pt->type = TITLE_T;
    if (dexterity_pt == NULL)
        return (NULL);
    list_text = add_text(list_text, dexterity_pt);
    return (list_text);
}

t_text *create_tskill4_attrib_scene(t_text *list_text)
{
    sfVector2f pos = {1500, 700};
    t_text *constitution = create_text("CONSTITUTION",
    "ressources/font/karnivor.ttf", pos, 30);
    constitution->type = TITLE_T;
    if (constitution == NULL)
        return (NULL);
    list_text = add_text(list_text, constitution);

    sfVector2f pos2 = {1790, 700};
    t_text *constitution_pt = create_text("0",
    "ressources/font/karnivor.ttf", pos2, 30);
    constitution_pt->type = TITLE_T;
    if (constitution_pt == NULL)
        return (NULL);
    list_text = add_text(list_text, constitution_pt);
    return (list_text);
}

t_text *create_tskills_attrib_scene(t_text *list_text)
{
    if ((list_text = create_tskill1_attrib_scene(list_text)) == NULL)
        return (NULL);
    if ((list_text = create_tskill2_attrib_scene(list_text)) == NULL)
        return (NULL);
    if ((list_text = create_tskill3_attrib_scene(list_text)) == NULL)
        return (NULL);
    if ((list_text = create_tskill4_attrib_scene(list_text)) == NULL)
        return (NULL);
    if ((list_text = create_tskill5_attrib_scene(list_text)) == NULL)
        return (NULL);
    if ((list_text = create_tskill6_attrib_scene(list_text)) == NULL)
        return (NULL);
    if ((list_text = create_tskill7_attrib_scene(list_text)) == NULL)
        return (NULL);
    return (list_text);
}
