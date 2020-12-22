/*
** EPITECH PROJECT, 2019
** MY_RPG
** File description:
** init_npc_game1_scene
*/

#include "rpg.h"

t_npc *create_npc1_game1_scene(t_npc *list)
{
    t_npc *new = NULL;
    sfVector2f position = {400, 400};
    sfIntRect rect = {0, 0, 29, 43};

    new = create_npc("ressources/npc/baby.png", position, rect, 319);
    if (new == NULL)
        return (NULL);
    new->type = BABY;
    new->callback = &go_conv_scene;
    list = add_npc(list, new);
    if (add_text_to_npc(new, "ressources/conv/1.npc") == -1)
        return (NULL);
    return (list);
}

t_npc *create_npc2_game1_scene(t_npc *list)
{
    t_npc *new = NULL;
    sfVector2f position = {800, 400};
    sfIntRect rect = {0, 0, 29, 43};

    new = create_npc("ressources/npc/baby.png", position, rect, 319);
    if (new == NULL)
        return (NULL);
    new->type = ENEMY;
    new->callback = &go_fight_scene;
    new->life = 20;
    new->damage = 10;
    new->defense = 5;
    list = add_npc(list, new);
    return (list);
}

t_npc *init_npc_game1_scene(void)
{
    sfVector2f position = {3445, 1500};
    t_npc *list = NULL;

    if ((list = create_npc1_game1_scene(list)) == NULL)
        return (NULL);
    if ((list = create_npc2_game1_scene(list)) == NULL)
        return (NULL);
    if ((list = create_sensei(list, position,
        "ressources/conv/3.sensei")) == NULL)
        return (NULL);
    return (list);
}
