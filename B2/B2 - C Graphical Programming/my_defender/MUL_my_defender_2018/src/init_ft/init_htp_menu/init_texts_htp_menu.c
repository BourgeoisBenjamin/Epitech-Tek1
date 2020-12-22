/*
** EPITECH PROJECT, 2019
** MY DEFENDER
** File description:
** init_objs_htp_menu.c
*/

#include "defender.h"

t_text *init_texts_htp_menu2(void)
{
    sfVector2f pos5 = {410, 300};
    sfVector2f pos6 = {600, 400};
    sfVector2f pos7 = {400, 500};
    t_text *list_text = NULL;

    list_text = add_text(list_text,
    create_text("Protect your castle from the enemy.",
    "rsc/rules.ttf", pos5, 80));
    list_text = add_text(list_text,
    create_text("Manage your money well.", "rsc/rules.ttf", pos6, 80));
    list_text = add_text(list_text,
    create_text("Pay attention to the life of your castle.\n\t\t\t\tGood luck!",
    "rsc/rules.ttf", pos7, 80));
    return list_text;
}

t_text *init_texts_htp_menu(void)
{
    sfVector2f pos3 = {480, 100};
    sfVector2f pos4 = {540, 200};
    t_text *list_text = NULL;

    list_text = add_text(list_text,
    create_text("< HOW TO PLAY >", "rsc/font_title.ttf", pos3, 80));
    list_text = add_text(list_text,
    create_text("Place your tower on the map.", "rsc/rules.ttf", pos4, 80));
    return list_text;
}
