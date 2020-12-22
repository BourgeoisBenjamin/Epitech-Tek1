/*
** EPITECH PROJECT, 2019
** MY_DEFENDER
** File description:
** init_texts_main_menu
*/

#include "defender.h"

t_text *init_texts_main_menu(void)
{
    sfVector2f pos3 = {480, 100};
    t_text *list_text = NULL;
    t_text *title = create_text("< MY DEFENDER >",
    "rsc/font_title.ttf", pos3, 80);
    list_text = add_text(list_text, title);
    return list_text;
}
