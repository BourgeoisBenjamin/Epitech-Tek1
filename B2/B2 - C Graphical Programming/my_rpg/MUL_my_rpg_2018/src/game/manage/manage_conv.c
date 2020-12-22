/*
** EPITECH PROJECT, 2019
** MY_RPG
** File description:
** manage_conv
*/

#include "rpg.h"

void changed_text_conv_scene(t_rpg *game, t_text *tmp,
sfRenderWindow *window, t_scenes *scene)
{
    sfColor color;
    sfVector2f position = {400, 200};
    color = sfText_getColor(tmp->text);
    color.a = 255;
    sfText_setColor(tmp->text, color);
    sfText_setPosition(tmp->text, position);
    draw_scene(game->player, window, game->scenes_array, game->scene);
    color.a = 0;
    sfText_setColor(tmp->text, color);
    sfClock_restart(scene->clock);
}

int manage_conv_scene(t_rpg *game, t_scenes *scene, sfRenderWindow *window)
{
    sfEvent event;
    t_text *tmp = scene->texts->next->next;

    list_text_transparence(tmp);
    draw_scene(game->player, window, game->scenes_array, game->scene);
    while (tmp) {
        sfRenderWindow_waitEvent(window, &event);
        if (sfKeyboard_isKeyPressed(sfKeyA)) break;
        if (!sfKeyboard_isKeyPressed(sfKeyF)) continue;
        if (get_elapsed_time(scene->clock) < 1) continue;
        changed_text_conv_scene(game, tmp, window, scene);
        tmp = tmp->next;
    }
    quit_conv_scene(game);
    return (0);
}
