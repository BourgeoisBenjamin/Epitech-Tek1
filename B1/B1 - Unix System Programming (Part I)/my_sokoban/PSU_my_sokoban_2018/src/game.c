/*
** EPITECH PROJECT, 2018
** Sokoban
** File description:
** sokoban.c
*/

#include <sokoban.h>

void action_key(int key, t_map *map, t_player *player)
{
    switch (key) {
    case ' ':
        reset_game(map);
        break;
    case 'q':
        quit_game(map, player);
        break;
    case KEY_UP:
        move_up(map, player);
        break;
    case KEY_DOWN:
        move_down(map, player);
        break;
    case KEY_LEFT:
        move_left(map, player);
        break;
    case KEY_RIGHT:
        move_right(map, player);
        break;
    }
}

int reset_game(t_map *map)
{
    map->map = str_to_2d_array(map);
    return 0;
}

void quit_game(t_map *map, t_player *player)
{
    endwin();
    free_all(map, player);
    exit(0);
}

int game(t_map *map, t_player *player)
{
    initscr();
    keypad(stdscr, TRUE);
    noecho();
    curs_set(0);

    int key;

    while (!game_win(map) && !game_blocked(map)) {
        update_map(map, player);
        display_map(map);
        key = getch();
        action_key(key, map, player);
    }
    display_map(map);
    endwin();
    if (game_blocked(map) && !game_win(map))
        return 1;
    else
        return 0;
}