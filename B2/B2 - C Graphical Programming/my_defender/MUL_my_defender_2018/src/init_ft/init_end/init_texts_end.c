/*
** EPITECH PROJECT, 2019
** MY_DEFENDER
** File description:
** init_texts_end
*/

#include "defender.h"

t_text *init_texts_end(void)
{
    sfVector2f pos = {590, 100};
    sfVector2f pos2 = {580, 300};
    sfVector2f pos3 = {1080, 300};
    sfColor color = {227, 143, 37, 255};
    t_text *list_text = NULL;
    t_text *title = create_text("< YOU WIN >", "rsc/font_title.ttf", pos, 80);
    list_text = add_text(list_text, title);
    t_text *score = create_text("YOUR SCORE", "rsc/font_title.ttf", pos2, 50);
    pos2.y = 400;
    t_text *b_score = create_text("BEST SCORE", "rsc/font_title.ttf", pos2, 50);
    t_text *score_nb = create_text("1234", "rsc/font_title.ttf", pos3, 50);
    pos3.y = 400;
    t_text *b_score_nb = create_text("1234", "rsc/font_title.ttf", pos3, 50);
    sfText_setColor(score_nb->text, color);
    sfText_setColor(b_score_nb->text, color);
    list_text = add_text(list_text, score);
    list_text = add_text(list_text, score_nb);
    list_text = add_text(list_text, b_score);
    list_text = add_text(list_text, b_score_nb);
    return list_text;
}
