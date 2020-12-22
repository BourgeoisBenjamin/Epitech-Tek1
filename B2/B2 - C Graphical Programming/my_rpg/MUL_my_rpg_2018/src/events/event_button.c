/*
** EPITECH PROJECT, 2018
** my_rpg
** File description:
** event_button
*/

#include "rpg.h"

int event_button(sfRenderWindow *window, sfEvent event,
t_scenes *scene, t_rpg *game)
{
    sfVector2i mouse_position = sfMouse_getPositionRenderWindow(window);
    for (t_button *tmp = scene->buttons; tmp; tmp = tmp->next) {
        if (event.type == sfEvtMouseButtonPressed
        && button_is_clicked(tmp, mouse_position)) {
            tmp->onclick(tmp);
            sfMusic_play(tmp->click_effect);
            if (tmp->callback != NULL && tmp->callback(game) == -1)
                return (-1);
            return (0);
        } else if (event.type != sfEvtMouseButtonPressed
        && button_is_clicked(tmp, mouse_position)) {
            tmp->onhover(tmp);
        } else {
            tmp->onnormal(tmp);
        }
    }
    return (0);
}
