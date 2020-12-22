/*
** EPITECH PROJECT, 2019
** MY_RPG
** File description:
** init_texts_conv_scene
*/

#include "rpg.h"

t_text *create_keytext_conv_scene(t_text *list_text)
{
    sfVector2f pos = {60, 900};
    sfVector2f pos2 = {60, 950};
    t_text *key_right = create_text("F TO CONTINUE CONVERSATION",
    "ressources/font/karnivor.ttf", pos, 20);
    t_text *key_down = create_text("A TO QUIT CONVERSATION",
    "ressources/font/karnivor.ttf", pos2, 20);
    key_right->type = TITLE_T;
    key_down->type = TITLE_T;
    if (key_right == NULL || key_down == NULL)
        return (NULL);
    list_text = add_text(list_text, key_right);
    list_text = add_text(list_text, key_down);
    return (list_text);
}

t_text *init_texts_conv_scene(void)
{
    t_text *list_text = NULL;
    if ((list_text = create_keytext_conv_scene(list_text)) == NULL)
        return (NULL);
    return (list_text);
}
