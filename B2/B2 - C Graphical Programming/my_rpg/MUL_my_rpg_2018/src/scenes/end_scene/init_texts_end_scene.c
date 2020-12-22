/*
** EPITECH PROJECT, 2019
** MY_RPG
** File description:
** init_texts_end_scene
*/

#include "rpg.h"

t_text *create_credits_end_scene(t_text *list_text)
{
    char *str = "     Sensei as Bad Men\nCharlie as credulous men\n\n    \
    Oriane Aumoitte\n     Celeste Bousseau\n    Benjamin Bourgeois";
    sfVector2f pos = {660, 400};
    t_text *credits = create_text(str, "ressources/font/karnivor.ttf", pos, 40);
    credits->type = TITLE_T;
    if (credits == NULL)
        return (NULL);
    list_text = add_text(list_text, credits);
    return (list_text);
}

t_text *create_titlegame_end_scene(t_text *list_text)
{
    sfVector2f pos = {720, 250};
    t_text *title = create_text("MY AMNESIA", "ressources/font/karnivor.ttf",
    pos, 60);
    title->type = TITLE_T;
    if (title == NULL)
        return (NULL);
    list_text = add_text(list_text, title);
    return (list_text);
}

t_text *create_title_end_scene(t_text *list_text)
{
    sfVector2f pos = {570, 50};
    t_text *title = create_text("CREDITS", "ressources/font/karnivor.ttf"
    , pos, 150);
    title->type = TITLE_T;
    if (title == NULL)
        return (NULL);
    list_text = add_text(list_text, title);
    return (list_text);
}

t_text *init_texts_end_scene(void)
{
    t_text *list_text = NULL;

    if ((list_text = create_title_end_scene(list_text)) == NULL)
        return (NULL);
    if ((list_text = create_titlegame_end_scene(list_text)) == NULL)
        return (NULL);
    if ((list_text = create_credits_end_scene(list_text)) == NULL)
        return (NULL);
    return (list_text);
}
