/*
** EPITECH PROJECT, 2019
** MY_DEFENDER
** File description:
** main
*/

#include <defender.h>

void print_hello()
{
    printf("Hello\n");
}

int button_is_clicked(button_t *button, sfVector2i click_position)
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

void init_button(button_t *button, sfVector2f position, sfVector2f size, sfColor color, void *callback)
{
    button->rect = sfRectangleShape_create();
    sfRectangleShape_setPosition(button->rect, position);
    sfRectangleShape_setSize(button->rect, size);
    sfRectangleShape_setFillColor(button->rect, color);
    button->callback = callback;
}

sfRenderWindow* create_my_window(int width, int height)
{
    sfRenderWindow *window;
    sfVideoMode video_mode;
    
    video_mode.width = width;
    video_mode.height = height;
    video_mode.bitsPerPixel = 32;

    window = sfRenderWindow_create(video_mode,
                                   "MyWindow",
                                   sfDefaultStyle,
                                   NULL);

    return (window);
}

int main(void)
{
    setbuf(stdout, NULL);
    sfEvent event;
    sfRenderWindow *window;
    sfColor color = {255, 68, 255, 255};
    sfVector2f position = {100, 100};
    sfVector2f size = {100, 100};
    
    window = create_my_window(1220, 1456);

    button_t *button = malloc(sizeof(button_t));
    init_button(button, position, size, color, &print_hello);

    sfRenderWindow_drawRectangleShape(window, button->rect, NULL);
    sfRenderWindow_setFramerateLimit(window, 60);
    while (sfRenderWindow_isOpen(window)) {
        if (event.type == sfEvtMouseButtonReleased) {
            sfVector2i click_position = sfMouse_getPositionRenderWindow(window);
            if(button_is_clicked(button, click_position))
                button->callback();
        }
        sfRenderWindow_display(window);
        while (sfRenderWindow_pollEvent(window, &event)) {
            if (event.type == sfEvtClosed)
                sfRenderWindow_close(window);
        }
    }
    sfRenderWindow_destroy(window);
    return 0;
}