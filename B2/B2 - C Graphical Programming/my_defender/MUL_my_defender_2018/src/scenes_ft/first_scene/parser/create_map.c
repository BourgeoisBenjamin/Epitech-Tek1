/*
** EPITECH PROJECT, 2019
** MY_DEFENDER
** File description:
** create map
*/

#include "defender.h"

t_game_object *create_map(t_game_object *list_obj, char *line)
{
    char *sprite[] = {"rsc/floor.png", "rsc/road.png", \
        "rsc/castle.png"};
    t_game_object *temp = NULL;
    static sfVector2f pos = {0, 0};
    sfIntRect rect = {0, 0, 135, 135};

    for (int i = 0; line[i]; i++) {
        for (e_type entities = GRASS; entities < MENU1; entities++) {
            if (line[i] - '0' + 1 == (int)entities) {
                temp = create_object(sprite[entities - 2], pos, rect, 135);
                temp->type = entities;
                list_obj = add_object(list_obj, temp);
            }
        }
        pos.x += 135;
    }
    pos.y = (pos.y >= 675) ? 0 : pos.y + 135;
    pos.x = 0;
    return list_obj;
}
