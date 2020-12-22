/*
** EPITECH PROJECT, 2019
** MY_RPG
** File description:
** init_texts_htp_scene
*/

#include "rpg.h"

t_text *create_title_htp_scene(t_text *list_text)
{
    sfVector2f pos = {260, 50};
    t_text *settings = create_text("HOW TO PLAY", "ressources/font/karnivor.ttf"
    , pos, 180);
    settings->type = TITLE_T;
    if (settings == NULL)
        return (NULL);
    list_text = add_text(list_text, settings);
    return (list_text);
}

t_text *init_texts_htp_scene(void)
{
    t_text *list_text = NULL;

    if ((list_text = create_title_htp_scene(list_text)) == NULL)
        return (NULL);
    return (list_text);
}
