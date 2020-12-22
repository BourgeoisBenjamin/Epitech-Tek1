/*
** EPITECH PROJECT, 2019
** MY_RPG
** File description:
** init_npc_game2_scene
*/

#include "rpg.h"

t_npc *create_npc1_game2_scene(t_npc *list)
{
    t_npc *new = NULL;
    sfVector2f position = {400, 400};
    sfIntRect rect = {0, 0, 29, 43};

    new = create_npc("ressources/npc/baby.png", position, rect, 319);
    if (new == NULL)
        return (NULL);
    new->callback = &go_conv_scene;
    new->type = BABY;
    list = add_npc(list, new);
    if (add_text_to_npc(new, "ressources/conv/2.npc") == -1)
        return (NULL);
    return (list);
}

t_npc *create_npc2_game2_scene(t_npc *list)
{
    t_npc *new = NULL;
    sfVector2f position = {1400, 400};
    sfIntRect rect = {0, 0, 24, 24};
    sfVector2f scale = {3, 3};

    new = create_npc("ressources/npc/kobold.png", position, rect, 360);
    sfSprite_setScale(new->sprite, scale);
    if (new == NULL)
        return (NULL);
    new->type = ENEMY;
    new->callback = &go_fight_scene;
    new->life = 60;
    new->damage = 20;
    new->defense = 10;
    list = add_npc(list, new);
    return (list);
}

t_npc *create_npc3_game2_scene(t_npc *list)
{
    t_npc *new = NULL;
    sfVector2f position = {1600, 1200};
    sfIntRect rect = {0, 0, 24, 24};
    sfVector2f scale = {3, 3};

    new = create_npc("ressources/npc/kobold.png", position, rect, 360);
    sfSprite_setScale(new->sprite, scale);
    if (new == NULL)
        return (NULL);
    new->type = ENEMY;
    new->callback = &go_fight_scene;
    new->life = 60;
    new->damage = 20;
    new->defense = 10;
    list = add_npc(list, new);
    return (list);
}

t_npc *init_npc_game2_scene(void)
{
    sfVector2f position = {669, 1256};
    t_npc *list = NULL;

    if ((list = create_npc1_game2_scene(list)) == NULL)
        return (NULL);
    if ((list = create_npc2_game2_scene(list)) == NULL)
        return (NULL);
    if ((list = create_npc3_game2_scene(list)) == NULL)
        return (NULL);
    if ((list = create_sensei(list, position,
        "./ressources/conv/5.sensei")) == NULL)
        return (NULL);
    return (list);
}
