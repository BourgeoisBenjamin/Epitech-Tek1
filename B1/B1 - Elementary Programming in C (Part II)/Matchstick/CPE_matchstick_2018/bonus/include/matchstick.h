/*
** EPITECH PROJECT, 2019
** MATCHSTICK
** File description:
** header
*/

#ifndef MATCHSTICK_H
#define MATCHSTICK_H

#include "my.h"
#include <stdio.h>
#include <time.h>

typedef struct s_info
{
    char **map;
    int size;
    int matches_max;
    int nb_matches;
    int rows;
    int cols;
    int return_status;
    int line;
    int matches;
} t_info;

void display_help(void);
int check_save_arg(char **argv, t_info *game);
int check_error(int argc, char **argv, t_info *game);
int fill_pip(t_info *game);
int fill_map(t_info *game);
char **mem_alloc_2d_array(int nb_rows, int nb_cols);
int generate_map(t_info *game);
void delete_map(t_info *game);
void display_map(t_info *game);
int check_line(t_info *game, char *line);
char *get_line(t_info *game);
int check_matches_in_map(t_info *game);
int check_matches(t_info *game, char *matches);
char *get_matches(void);
int check_win(t_info *game, int i);
int players_turn(t_info *game);
int matchstick(t_info *game);
void remove_matches(t_info *game);
int get_infos(t_info *game);
int get_nim_sum(t_info *game);
int get_right_line(t_info *game);
void ias_turn(t_info *game);

#endif