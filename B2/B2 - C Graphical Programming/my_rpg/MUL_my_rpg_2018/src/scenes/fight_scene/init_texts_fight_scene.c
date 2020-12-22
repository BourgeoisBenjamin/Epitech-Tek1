/*
** EPITECH PROJECT, 2019
** MY_RPG
** File description:
** init_texts_fight_scene
*/

#include "rpg.h"

t_text *create_name_fight_scene(t_text *list_text)
{
    sfVector2f pos = {560, 640};
    sfVector2f pos2 = {1220, 640};

    t_text *name1 = create_text("YOU",
    "ressources/font/karnivor.ttf", pos, 20);
    t_text *name2 = create_text("ENEMY",
    "ressources/font/karnivor.ttf", pos2, 20);
    name1->type = TITLE_T;
    name2->type = TITLE_T;
    if (name1 == NULL || name2 == NULL)
        return (NULL);
    list_text = add_text(list_text, name1);
    list_text = add_text(list_text, name2);
    return (list_text);
}

t_text *init_texts_fight_scene(void)
{
    t_text *list_text = NULL;
    if ((list_text = create_name_fight_scene(list_text)) == NULL)
        return (NULL);
    return (list_text);
}
