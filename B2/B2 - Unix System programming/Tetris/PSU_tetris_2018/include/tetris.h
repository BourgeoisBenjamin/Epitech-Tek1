/*
** EPITECH PROJECT, 2019
** TETRIS
** File description:
** header
*/

#ifndef TETRIS_H
#define TETRIS_H

#include "my.h"
#include <curses.h>
#include <getopt.h>
#include <stdio.h>
#include <dirent.h>
#include <sys/ioctl.h>
#include <termios.h>
#include <ncurses.h>
#include <term.h>
#include <time.h>

#define BASE 80

typedef struct s_settings
{
    char **argv;
    int help;
    int level;
    char *key_left2;
    char *key_right2;
    char *key_turn;
    char *key_drop;
    char *key_quit;
    char *key_pause;
    int row;
    int col;
    int hide_next;
    int debug;
    int is_quit;
    int is_pause;
} t_settings;

typedef struct s_tetriminos
{
    char *name;
    int width;
    int height;
    int color;
    char **form;
    int error;
} t_tetriminos;

typedef struct s_window
{
    WINDOW *board_game;
    WINDOW *stats;
    WINDOW *tetriminos;
} t_window;

typedef struct s_tetris
{
    t_settings *settings;
    t_tetriminos **tetriminos;
    t_window *window;
    char **game;
    char **decor;
    t_tetriminos *current;
    t_tetriminos *next;
    int score;
} t_tetris;

int tetris(int argc, char **argv);
int display_help(t_settings *settings);
void display_key(char *key_name, char *key);
void display_keys(t_settings *settings);
void display_settings(t_settings *settings);
void display_tetriminos(t_tetriminos **tab_tetri);
int debug_mode(t_tetris *info);
void set_input_term(int mode);

//***************************
//
// DELETE FUNCTION
//
//***************************
void delete_all(t_tetris *info);
void delete_game(t_tetris *info);
void delete_settings(t_settings *settings);
void *delete_tetriminos_array(t_tetriminos **tetriminos_array);
void *delete_tetriminos(t_tetriminos *tetriminos);

//***************************
//
// DISPLAY FUNCTION
//
//***************************
void display_board_game(t_tetris *info);
void display_game(t_tetris *info);
void display_next_tetriminos(t_tetris *info);
void display_stats(t_tetris *info);

//***************************
//
// GAME FUNCTION
//
//***************************
int add_tetrimino_in_boardgame(t_tetris *info);
int check_line(t_tetris *info);
int game(t_tetris *info);
bool is_contact(t_settings *settings, char **game, char **decor);
int loop_game(t_tetris *info);
int manage_clock(t_tetris *info);
int manage_contact(t_tetris *info);
void movement_tetriminos(t_tetris *info);

//***************************
//
// READ KEY FUNCTION
//
//***************************
int read_key(t_tetris *info);
int key_turn_ft(t_tetris *info);
int key_right2_ft(t_tetris *info);
int key_quit_ft(t_tetris *info);
int key_pause_ft(t_tetris *info);
int key_left2_ft(t_tetris *info);
int key_drop_ft(t_tetris *info);

//***************************
//
// INIT FUNCTION
//
//***************************
char **init_array_game(t_settings *settings);
void init_border_board_game(t_window *window, int rows, int cols);
void init_border_stats(t_window *window);
int init_game(t_tetris *info);
t_tetriminos *init_next_tetriminos(t_tetris *info);
t_tetriminos *random_tetriminos(t_tetriminos **tetriminos);
t_tetriminos **init_tetriminos_array(void);
t_settings *init_settings(void);
t_tetris *init(void);

//***************************
//
// TETRIMINOS FUNCTION
//
//***************************
int get_nb_tetriminos(t_tetriminos **tetriminos_array);
t_tetriminos **add_tetriminos(t_tetriminos **index,
t_tetriminos *new_tetriminos);
DIR *open_dir_tetriminos(void);
t_tetriminos **get_tetriminos(t_tetriminos **tetriminos_tab);
t_tetriminos *parse_file_tetriminos(struct dirent *dp);
void get_path(char *name_file, char path[PATH_MAX]);
int open_file(char *name);
char *get_name_tetrimino(struct dirent *dp);
int parse_size_color_tetrimino(char **info_tab, t_tetriminos *new);
int get_size_color_tetrimino(t_tetriminos *new, int fd);
t_tetriminos *init_new_tetriminos(void);
int is_tetrimino_file(struct dirent *dp);
t_tetriminos *read_file_tetrimino(t_tetriminos *new, struct dirent *dp);
void improve_form_tetrimino(char **form);
char **extend_form_tetrimino(char **form, char *line);
int get_form_tetrimino(t_tetriminos *new, int fd);
int sort_alpha(t_tetriminos **tab_tetri, int i);
t_tetriminos **sort_tetriminos_tab(t_tetriminos **tab_tetri);
int verif_form_charac_tetrimino(t_tetriminos *new);
int verif_form_size_tetrimino(t_tetriminos *new);
//***************************
//
// PARSE FUNCTION
//
//***************************
int parse_argument(int argc, char **argv, t_tetris *info);
int arg_debug(t_settings *settings);
int arg_help(t_settings *settings);
int arg_level(t_settings *settings);
int arg_next(t_settings *settings);
int arg_size(t_settings *settings);
int arg_key_left(t_settings *settings);
int arg_key_right(t_settings *settings);
int arg_key_drop(t_settings *settings);
int arg_key_pause(t_settings *settings);
int arg_key_quit(t_settings *settings);
int arg_key_turn(t_settings *settings);
int parse_argument(int argc, char **argv, t_tetris *info);
int run_get_opt(int argc, char **argv, t_tetris *info);
int verif_argument(int c, t_tetris *info);
int wrong_argument(void);
int is_same_key(t_settings *settings);

#endif
