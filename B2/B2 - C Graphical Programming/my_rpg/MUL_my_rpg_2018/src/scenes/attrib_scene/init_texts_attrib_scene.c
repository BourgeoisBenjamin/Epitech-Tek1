/*
** EPITECH PROJECT, 2019
** MY_RPG
** File description:
** init_texts_attrib_scene
*/

#include "rpg.h"

t_text *create_tskills_pt_attrib_scene(t_text *list_text)
{
    sfVector2f pos = {500, 200};
    t_text *skills = create_text("SKILLS POINT : ",
    "ressources/font/karnivor.ttf", pos, 50);
    sfText_setColor(skills->text, sfBlack);
    skills->type = TITLE_T;
    if (skills == NULL)
        return (NULL);
    list_text = add_text(list_text, skills);

    sfVector2f pos2 = {1000, 200};
    t_text *pt = create_text("20",
    "ressources/font/karnivor.ttf", pos2, 50);
    sfText_setColor(pt->text, sfBlack);
    pt->type = TITLE_T;
    if (pt == NULL)
        return (NULL);
    list_text = add_text(list_text, pt);
    return (list_text);
}

t_text *create_title_attrib_scene(t_text *list_text)
{
    sfVector2f pos = {300, 50};
    t_text *pause = create_text("CHOOSE YOUR SKILLS",
    "ressources/font/karnivor.ttf", pos, 100);
    pause->type = TITLE_T;
    if (pause == NULL)
        return (NULL);
    list_text = add_text(list_text, pause);
    return (list_text);
}

t_text *init_texts_attrib_scene(void)
{
    t_text *list_text = NULL;
    if ((list_text = create_title_attrib_scene(list_text)) == NULL)
        return (NULL);
    if ((list_text = create_tskills_pt_attrib_scene(list_text)) == NULL)
        return (NULL);
    if ((list_text = create_tskills_attrib_scene(list_text)) == NULL)
        return (NULL);
    return (list_text);
}
