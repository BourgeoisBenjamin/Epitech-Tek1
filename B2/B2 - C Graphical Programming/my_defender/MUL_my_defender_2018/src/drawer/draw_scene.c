/*
** EPITECH PROJECT, 2019
** MY_DEFENDER
** File description:
** draw_scene
*/

#include <defender.h>

void draw_scene(sfRenderWindow *window, t_scenes **scene, int current_scene)
{
    sfRenderWindow_clear(window, sfBlack);
    for (e_type obj_type = BACKGROUND; obj_type < UNKNOWN; obj_type++) {
        for (t_game_object *temp = scene[current_scene]->objs; temp;
        temp = temp->next) {
            if (temp->type == obj_type) {
                sfRenderWindow_drawSprite(window, temp->sprite, NULL);
            }
        }
    }
    for (t_button *temp = scene[current_scene]->buttons; temp;
        temp = temp->next)
        sfRenderWindow_drawRectangleShape(window, temp->rect, NULL);
    for (t_text *temp = scene[current_scene]->texts; temp; temp = temp->next)
        sfRenderWindow_drawText(window, temp->text, NULL);
    sfRenderWindow_display(window);
}
