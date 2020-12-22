/*
** EPITECH PROJECT, 2019
** MY_RPG
** File description:
** init_texts_pause_scene
*/

#include "rpg.h"

t_text *create_title_pause_scene(t_text *list_text)
{
    sfVector2f pos = {590, 50};
    t_text *pause = create_text("PAUSE", "ressources/font/karnivor.ttf",
    pos, 180);
    pause->type = TITLE_T;
    if (pause == NULL)
        return (NULL);
    list_text = add_text(list_text, pause);
    return (list_text);
}

t_text *init_texts_pause_scene(void)
{
    t_text *list_text = NULL;
    if ((list_text = create_title_pause_scene(list_text)) == NULL)
        return (NULL);
    return (list_text);
}
