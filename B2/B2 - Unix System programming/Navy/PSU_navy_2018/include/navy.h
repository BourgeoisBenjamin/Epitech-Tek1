/*
** EPITECH PROJECT, 2019
** NAVY
** File description:
** header
*/

#ifndef NAVY_H
#define NAVY_H

#include "my.h"
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <signal.h>

typedef struct s_player {
    char **map;
    int attack;
    int hit;
    pid_t pid;
} t_player;

typedef struct s_game {
    t_player *player;
    t_player *enemy;
    int win;
} t_game;

extern int info_handler;

/* HELP */
int help(int argc, char **argv);
void display_help(void);
void display_wrong_usage(void);

/* INIT */
t_game *init_game(char **argv);

/* FREE */
void free_all(t_game *info);

/* FILES */
int open_file(char *file);
int check_file(char *file);
int read_file(int fd);

/* NAVY */
int navy(int argc, char **argv, t_game *info);

/* CHECK */
int error_file(char *line);
int check_line_position(char *line);
int valid_line(char *line);

/* PARSING */
char** parse_map_enemy(void);
char **parse_map_player(char *file);
int parse_map(char *file, t_game *info);
int verif_map(char **map);

/* CREATE BOAT */
void create_boat_vert(int len, char *line, char **map);
void create_boat_hor(int len, char *line, char **map);
void create_boat(char *line, char **map);

/* DISPLAY */
void display_map(char **map_player, char **map_enemy);

/* CLIENT */
int get_connection(t_game *info);
int client(t_game *info);

/* SERVER */
void wait_connection(int sig, siginfo_t *siginfo, void *context);
void init_connection(t_game *info);
void server(t_game *info);

/* RECEIVER */
void receiver_handler(int sig, siginfo_t *siginfo, void *context);
void receiver(t_game *info);

/* SENDER */
void sender(int to_send, int pid_enemy);

/* NAVY */
int navy(int argc, char **argv, t_game *info);

/* GAME */
void game_server(t_game *info);
void game_client(t_game *info);
int check_win(int hit_player, int hit_enemy);

/* ATTACK */
int check_attack(char *attack);
int get_attack(void);
void check_attack_boat(t_game *info);
void check_response_attack_boat(t_game *info);


#endif
