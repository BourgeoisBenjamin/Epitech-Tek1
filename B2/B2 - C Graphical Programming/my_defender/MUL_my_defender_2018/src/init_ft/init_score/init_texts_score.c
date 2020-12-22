/*
** EPITECH PROJECT, 2019
** MY DEFENDER
** File description:
** init_objs_htp_menu.c
*/

#include "defender.h"

t_text *init_texts_score2(t_instance *instance)
{
    sfColor color = {227, 143, 37, 255};
    sfVector2f pos4 = {780, 480};
    t_text *list_text = NULL;

    list_text = add_text(list_text,
    create_text(instance->score, "rsc/rules.ttf", pos4, 200));
    sfText_setColor(list_text->text, color);
    return list_text;
}

t_text *init_texts_score1(void)
{
    sfVector2f pos3 = {480, 100};
    t_text *list_text = NULL;

    list_text = add_text(list_text,
    create_text("< BEST SCORE >", "rsc/font_title.ttf", pos3, 80));
    return list_text;
}
