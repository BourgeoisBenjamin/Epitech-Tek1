/*
** EPITECH PROJECT, 2019
** LEM_IN
** File description:
** header
*/

#ifndef LEMIN_H
#define LEMIN_H

#include "my.h"
#include <stdbool.h>

#define START "##start"
#define END "##end"
#define NB_ANTS "#number_of_ants"
#define ROOMS "#rooms"
#define TUNNELS "#tunnels"
#define MOVES "#moves"

typedef struct s_graph
{
    struct s_room **index;
    struct s_room *start;
    struct s_room *end;
    int nb_ants;
} t_graph;

typedef struct s_room
{
    char *name;
    int x;
    int y;
    int weight;
    bool is_visited;
    int ant;
    struct s_room *antecedent;
    struct s_room *prev;
    struct s_room **next;
} t_room;

int lemin(void);
void delete_index(t_room **index);
void delete_graph(t_graph *graph);
char *delete_room(t_room *room);

/* PARSER */
int check_line(t_graph *graph, char *buffer);
int check_room_or_tunnel(t_graph *graph, char *buffer);
t_graph *create_graph(void);
int parser(t_graph *graph);

/* ANTS */
int get_nb_ants(void);

/* END */
int add_end(t_graph *graph);
char **fetch_end_room(void);

/* ROOM */
t_room **add_room_in_index(t_room **index, t_room *new_room);
int add_room(t_graph *graph, char *buffer);
char **check_valid_room(char *line);
int connect_rooms(t_room *room1, t_room *room2);
t_room *create_room(char **info_tab);
int get_nb_rooms(t_room **room_tab);
int is_exist_room(char *name, t_room **index);
int is_room(char *buffer);
int is_same_co(char *x_r, char *y_r, t_room **index);

/* START */
int add_start(t_graph *graph);
char **fetch_start_room(void);

/* TUNNEL */
int add_tunnel(t_graph *graph, char *buffer);
char **check_valid_tunnel(char *line);
t_room *fetch_room(t_room **index, char *name);
int is_tunnel(char *buffer);

/* DIJKSTRA */
t_room *get_minimal_weight(t_room **index);
void child_condition(t_room *min_room);
t_room **save_path(t_graph *graph);
t_room **dijkstra(t_graph *graph);

/* DISPLAY */
void check_move_this_step(t_room **path_tab, int *is_write, int *old_ant_n);
void display_move(t_graph *graph, t_room **path_tab);

#endif
