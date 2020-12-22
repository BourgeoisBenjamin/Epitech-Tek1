/*
** EPITECH PROJECT, 2018
** my_runner
** File description:
** header_utils
*/

#ifndef RUNNER_UTILS_H
#define RUNNER_UTILS_H

#define WIDTH 1920
#define HEIGHT 1080

#define OFFSET_P 120
#define MAX_P 960
#define HEIGHT_P 180

#define OFFSET_PJ 120
#define MAX_PJ 720
#define HEIGHT_PJ 180

/* USAGE */
int check_arg(int argc, char **argv, t_instance *instance);
void display_usage(void);

/* LINKED LIST */
t_game_object *create_object(const char *path, sfVector2f pos,
    sfIntRect rect);
t_list *init_list(void);
void delete_list(t_list *list);
void delete_node_address(t_list *list, t_game_object *to_delete);
void delete_inside_node(t_game_object *object);
void delete_node(t_list *list);

/* INIT */
void init(t_game *game, t_instance *instance);
void init_sprite(t_game *game, t_instance *instance);
void init_instance(t_instance *instance);

/* DESTROY */
void destroy_game(t_game *game, t_instance *instance);
void destroy_window(t_game *game);
void destroy_struct(t_game *game, t_instance *instance);

/* SPRITE */
void add_sprite(t_list *list, t_game_object *object);
void move_rect(sfIntRect *rect, int offset, int max_value);

/* PARSER */
int parser(t_game *game, char *path, t_instance *instance);
int init_parser(t_parser *map, char *path);
int check_map(char *line);
void create_map(t_game *game, t_parser *map);

/* INFINITY */
int infinity(t_game *game, t_instance *instance);

/* ERROR */
int my_print_error(char *path);

/* ENTITIES */
void move_entities(t_list *entities, t_instance *instance);
void generate_map(t_list *entities, t_instance *instance);

/* END */
void init_end(t_game *game);
void end_game(t_game *game, t_instance *instance);

/* WIN */
void init_win(t_game *game);
void win_game(t_game *game, t_instance *instance);
void is_win(t_game *game, t_instance *instance);

/* FALL */
int is_fall(t_game *game, t_instance *instance);
int is_on_platform(t_game *game, t_instance *instance);
t_game_object *plat_x(sfVector2f pos, t_list *entities);
int plat_y(sfVector2f pos, t_game_object *platform);

#endif