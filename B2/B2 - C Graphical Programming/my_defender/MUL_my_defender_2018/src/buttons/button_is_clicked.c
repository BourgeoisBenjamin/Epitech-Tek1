/*
** EPITECH PROJECT, 2019
** MY_DEFENDER
** File description:
** button_is_clicked
*/

#include <defender.h>

int button_is_clicked(t_button *button, sfVector2i click_position)
{
    sfVector2f position = sfRectangleShape_getPosition(button->rect);
    sfVector2f size = sfRectangleShape_getSize(button->rect);
    sfVector2f true_click;
    true_click.x = (float)click_position.x;
    true_click.y = (float)click_position.y;

    if (position.x < true_click.x && true_click.x < position.x + size.x
        && position.y < true_click.y && true_click.y < position.y + size.y)
        return 1;
    return 0;
}
