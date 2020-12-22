/*
** EPITECH PROJECT, 2018
** my_screensaver
** File description:
** create point cube
*/

#include <my_screensaver.h>

void create_point_cube(t_cube *cube)
{
    t_cube topleft = {-1, -1, -1};
    t_cube topleft1 = {-1, -1, 1};
    t_cube topright = {1, -1, -1};
    t_cube topright1 = {1, -1, 1};
    t_cube bottomleft = {-1, 1, -1};
    t_cube bottomleft1 = {-1, 1, 1};
    t_cube bottomright = {1, 1, -1};
    t_cube bottomright1 = {1, 1, 1};

    cube[0] = topleft;
    cube[1] = topleft1;
    cube[2] = topright;
    cube[3] = topright1;
    cube[4] = bottomleft;
    cube[5] = bottomleft1;
    cube[6] = bottomright;
    cube[7] = bottomright1;
}
