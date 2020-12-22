/*
** EPITECH PROJECT, 2019
** MY_RPG
** File description:
** init_texts_intro_scene
*/

#include "rpg.h"

t_text *create_first_text_intro_scene(t_text *list_text)
{
    sfVector2f pos = {80, 100};
    sfColor color = {255, 255, 255, 0};
    t_text *first = create_text("... : CHARLIE... WAKE UP...",
    "ressources/font/karnivor.ttf",
    pos, 50);
    first->type = TEXT_T;
    sfText_setColor(first->text, color);
    if (first == NULL)
        return (NULL);
    list_text = add_text(list_text, first);
    return (list_text);
}

t_text *create_second_text_intro_scene(t_text *list_text)
{
    sfVector2f pos = {1420, 800};
    sfColor color = {255, 255, 255, 0};
    t_text *second = create_text("Charlie : Mmmmm...",
    "ressources/font/karnivor.ttf", pos, 50);
    second->type = TEXT_T;
    sfText_setColor(second->text, color);
    if (second == NULL)
        return (NULL);
    list_text = add_text(list_text, second);
    return (list_text);
}

t_text *create_third_text_intro_scene(t_text *list_text)
{
    sfVector2f pos = {80, 100};
    sfColor color = {255, 255, 255, 0};
    t_text *third = create_text("... : I am glad you are finaly wake up.\n"\
    "You did a nice drowing AHAHAH!", "ressources/font/karnivor.ttf", pos, 50);
    third->type = TEXT_T;
    sfText_setColor(third->text, color);
    if (third == NULL)
        return (NULL);
    list_text = add_text(list_text, third);
    return (list_text);
}

t_text *create_fourth_text_intro_scene(t_text *list_text)
{
    sfVector2f pos = {1300, 800};
    sfColor color = {255, 255, 255, 0};
    t_text *fourth = create_text("Charlie : Where am I?\nWho is that man?\n"\
    "I have to find him!", "ressources/font/karnivor.ttf", pos, 50);
    fourth->type = TEXT_T;
    sfText_setColor(fourth->text, color);
    if (fourth == NULL)
        return (NULL);
    list_text = add_text(list_text, fourth);
    return (list_text);
}

t_text *init_texts_intro_scene(void)
{
    t_text *list_text = NULL;
    if ((list_text = create_first_text_intro_scene(list_text)) == NULL)
        return (NULL);
    if ((list_text = create_second_text_intro_scene(list_text)) == NULL)
        return (NULL);
    if ((list_text = create_third_text_intro_scene(list_text)) == NULL)
        return (NULL);
    if ((list_text = create_fourth_text_intro_scene(list_text)) == NULL)
        return (NULL);
    return (list_text);
}
