/*
** EPITECH PROJECT, 2019
** MY_DEFENDER
** File description:
** init_texts_first_map
*/

#include "defender.h"

t_text *create_money_text(int money)
{
    sfVector2f pos = {830, 920};
    t_text *list_text = NULL;
    t_text *money_text = create_text(my_itoa(money),
    "rsc/font_title.ttf", pos, 50);
    sfColor color = {224, 188, 47, 255};
    sfText_setColor(money_text->text, color);
    list_text = add_text(list_text, money_text);
    return list_text;
}

void create_text_tower(t_text *list_text)
{
    sfVector2f pos = {70, 993};
    sfColor color = {26, 87, 102, 255};
    t_text *tower1 = create_text("50$", "rsc/font_title.ttf", pos, 20);
    sfText_setColor(tower1->text, color);
    pos.x = 215;
    t_text *tower2 = create_text("100$", "rsc/font_title.ttf", pos, 20);
    sfText_setColor(tower2->text, color);
    pos.x = 380;
    t_text *tower3 = create_text("150$", "rsc/font_title.ttf", pos, 20);
    sfText_setColor(tower3->text, color);
    pos.x = 540;
    t_text *tower4 = create_text("200$", "rsc/font_title.ttf", pos, 20);
    sfText_setColor(tower4->text, color);
    list_text = add_text(list_text, tower1);
    list_text = add_text(list_text, tower2);
    list_text = add_text(list_text, tower3);
    list_text = add_text(list_text, tower4);
}

void create_life_text(t_text *list_text, int life)
{
    sfVector2f pos = {1300, 910};
    t_text *life_text = create_text(my_itoa(life),
    "rsc/font_title.ttf", pos, 50);
    sfColor color = {201, 28, 24, 255};
    sfText_setColor(life_text->text, color);
    add_text(list_text, life_text);
}

t_text *init_texts_first_map(t_game *game)
{
    t_text *list_text = create_money_text(game->instance->money);
    create_life_text(list_text, game->instance->life);
    create_text_tower(list_text);
    return list_text;
}
