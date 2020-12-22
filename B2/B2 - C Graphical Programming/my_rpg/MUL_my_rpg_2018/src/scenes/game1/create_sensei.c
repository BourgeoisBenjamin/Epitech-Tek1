/*
** EPITECH PROJECT, 2018
** my_rpg
** File description:
** init_sensei
*/

#include "rpg.h"

t_npc *create_sensei(t_npc *list, sfVector2f position, char *disc)
{
    t_npc *new = NULL;
    sfIntRect rect = {0, 0, 16, 23};
    sfVector2f scale = {4, 4};

    new = create_npc("ressources/chars/sensei.png", position, rect, 23);
    sfSprite_setScale(new->sprite, scale);
    if (new == NULL)
        return (NULL);
    new->callback = &go_conv_scene;
    new->life = 100;
    new->type = SENSEI;
    new->move_every = -1;
    list = add_npc(list, new);
    if (add_text_to_npc(new, disc) == -1)
        return (NULL);
    return (list);
}
