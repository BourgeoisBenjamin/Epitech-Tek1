/*
** EPITECH PROJECT, 2018
** myscreensaver
** File description:
** create windows
*/

#include <my_screensaver.h>

sfRenderWindow* create_my_window(int width, int height)
{
    sfRenderWindow *window;
    sfVideoMode video_mode;

    video_mode.width = width;
    video_mode.height = height;
    video_mode.bitsPerPixel = 32;

    window = sfRenderWindow_create(video_mode,
                                    "My_Screensaver",
                                    sfDefaultStyle,
                                    NULL);

    return (window);
}
