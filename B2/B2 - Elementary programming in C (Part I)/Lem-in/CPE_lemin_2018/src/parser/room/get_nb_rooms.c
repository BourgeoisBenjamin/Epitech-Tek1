/*
** EPITECH PROJECT, 2019
** LEM_IN
** File description:
** get_nb_rooms
*/

#include <lemin.h>

int get_nb_rooms(t_room **room_tab)
{
    int nb_rooms = 0;
    while (room_tab[nb_rooms] != NULL)
        nb_rooms++;
    return (nb_rooms);
}
