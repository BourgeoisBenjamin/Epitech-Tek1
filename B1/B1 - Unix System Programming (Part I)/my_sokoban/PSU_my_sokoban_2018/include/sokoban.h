/*
** EPITECH PROJECT, 2018
** my_sokoban
** File description:
** Header
*/

#include <my.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stddef.h>
#include <ncurses.h>
#include <curses.h>

#define BUFF_SIZE 4096

typedef struct s_map
{
    int nb_cols;
    int nb_rows;
    char **map;
    char **original_map;
    char *str;
} t_map;

typedef struct s_player
{
    int x;
    int y;
} t_player;

/* CHECK COMMAND */

int display_usage(void);
int check_argv(int argc, char **argv);

/* CREATE STR */

int fs_open_file(char const *filepath);
char *create_str(char **argv);

/* DISPLAY MAP */

int display_map(t_map *map);

/* FIND NB ROWS COLS */

int find_nb_rows_cols(char **argv, t_map *map);

/* GAME */

void action_key(int key, t_map *map, t_player *player);
int reset_game(t_map *map);
void quit_game(t_map *map, t_player *player);
int game(t_map *map, t_player *player);

/* MAIN CHECK */

int check_map(t_map *map);
int check_dimension(t_map *map);
int check_op_player(t_map *map);
int check_str(t_map *str);
int check_op_player2(char c, int *x, int *o, int *p);

/* MEM ALLOC */

char *mem_alloc(char const *a, char const *b);

/* SOKOBAN */

void prepare_structure(t_map *map, t_player *player, char **argv);
int sokoban(char **argv);

/* TAB */

char **mem_alloc_2d_array(t_map *map);
char **str_to_2d_array(t_map *map);

/* GAME CHECK */
int game_win(t_map *map);
int game_blocked(t_map *map);
int corner(t_map *map, int i, int j);

/* MOVEMENTS */
int move_up(t_map *map, t_player *player);
int move_down(t_map *map, t_player *player);
int move_left(t_map *map, t_player *player);
int move_right(t_map *map, t_player *player);

/* UPDATE MAP */
int update_map(t_map *map, t_player *player);
void set_player_position(t_map *map, t_player *player, int i, int j);
void replace_o(t_map *map, int i, int j);

/* FREE_ALL */
void free_all(t_map *map, t_player *player);
void free_char_array(char **array, int rows);