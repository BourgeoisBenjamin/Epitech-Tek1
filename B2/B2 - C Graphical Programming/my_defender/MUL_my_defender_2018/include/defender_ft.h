/*
** EPITECH PROJECT, 2019
** MY_DEFENDER
** File description:
** header - FT
*/

#ifndef DEFENDER_FT_H
#define DEFENDER_FT_H

/* DRAWER */
void draw_scene(sfRenderWindow *window, t_scenes **scene, int current_scene);

/* INIT */
void init_instance(t_instance *instance);
t_game *init(void);
int init_renderwindow(t_game *game);
void init_main_menu(t_game *game);
void init_htp_menu(t_game *game);
int init_game(t_game *game);
void init_score(t_game *game);
void init_main_music(t_game *game);
void init_main_menu(t_game *game);
//
t_game_object *init_objs_main_menu(void);
t_button *init_buttons_main_menu(void);
t_text *init_texts_main_menu(void);
//
void init_pause_menu(t_game *game);
t_game_object *init_objs_pause_menu(void);
t_button *init_buttons_pause_menu(void);
t_text *init_texts_pause_menu(void);
//
void init_end(t_game *game);
t_game_object *init_objs_end(void);
t_button *init_buttons_end(void);
t_text *init_texts_end(void);
//
t_text *init_texts_htp_menu(void);
t_text *init_texts_htp_menu2(void);
t_game_object *init_objs_htp_menu(void);
void init_htp_menu(t_game *game);
t_button *init_buttons_htp_menu(void);
//
t_text *init_texts_score1(void);
t_text *init_texts_score2(t_instance *instance);
t_game_object *init_objs_score(void);
t_button *init_buttons_score(void);

/* FREE FT */
void delete_list_objs(t_game_object *objs);
void delete_list_buttons(t_button *buttons);
void delete_list_musics(t_music *musics);
void delete_list_texts(t_text *texts);
void free_scenes(t_scenes **scenes_array);
void free_all(t_game *game);

/* EVENT */
void event(t_game *game);
void windows_close(t_game *game);
void quit_game(t_game *game);
void start_menu(t_game *game);
void check_click(t_game *game);
void main_menu(t_game *game);
void quit_game(t_game *game);
void resume_menu(t_game *game);
void is_pause(t_game *game);
void start_game(t_game *game);
void how_to_play_menu(t_game *game);
void disp_score(t_game *game);
void menu_start(t_game *game);
void volume_up(t_game *game);
void volume_down(t_game *game);

/* LIST_FT */
t_button *add_button(t_button *list, t_button *to_add);
t_game_object *add_object(t_game_object *list, t_game_object *to_add);
t_text *add_text(t_text *list, t_text *to_add);
t_music *add_music(t_music *list, t_music *to_add);
void delete_inside_obj(t_game_object *to_delete);
t_game_object *delete_obj(t_game_object *list_obj, t_game_object *to_delete);

/* OBJECT */
t_game_object *create_object(const char *path, sfVector2f pos,
sfIntRect rect, int offset);

/* BUTTONS */
int button_is_clicked(t_button *button, sfVector2i click_position);
t_button *create_button(sfVector2f position, sfVector2f size, char *sprite,
void *callback);

/* MUSIC */
t_music *create_music(char *path, int volume, int loop, enum music type);

/* TEXT */
t_text *create_text(char *str, char *font_p, sfVector2f position, int size);

/* SCENES_FT */
int get_nb_scene(t_scenes **scenes);
t_scenes **add_scene(t_scenes **scenes, t_scenes *to_add);
t_scenes **init_scene_array(void);
t_scenes *create_scene(t_game_object *objs, t_button *buttons, t_text *texts,
t_music *musics);

/* FIRST SCENE INIT */
int create_first_map(t_game *game);
t_game_object *get_first_road(t_game_object *list_obj);
void create_enemies(t_game_object *list_obj);
void create_menu_back(t_game_object *list_obj);
void create_shop(t_game_object *list_obj);
void create_money_back(t_game_object *list_obj);
void create_health_back(t_game_object *list_obj);
t_game_object *init_objs_first_map(void);
t_button *create_start_button(void);
void create_tower_button(t_button *list_button);
t_button *init_buttons_first_map(void);
void create_text_tower(t_text *list_text);
t_text *create_money_text(int money);
void create_life_text(t_text *list_text, int life);
t_text *init_texts_first_map(t_game *game);
t_music *add_music_fire(void);
t_music *init_musics_first_map(void);

/* PARSER */
int check_map(char *line);
t_game_object *create_map_first_scene(void);
t_game_object *create_map(t_game_object *list_obj, char *line);
int open_file(char *path);

/* TOWER */
void buy_tower1(t_game *game);
void buy_tower2(t_game *game);
void buy_tower3(t_game *game);
void buy_tower4(t_game *game);
int is_in_map(t_game_object *list_obj, sfVector2f pos);
void posed_tower(t_game *game, t_game_object *temp);

/* MOVE */
void move_rect(sfIntRect *rect, int offset, int max_value);

/* GAME */
void game_main(t_game *game);
void manage_game(t_scenes *scene, t_instance *instance);
int number_enemy(t_game_object *list_obj);

/* MANAGE TOWER */
void manage_tower(t_game_object *tower);

/* MANAGE ENEMY */
void manage_enemy(t_game_object *enemy, t_game_object *list_obj);
int move_enemy(t_game_object *enemy, t_game_object *road);
int direction_handler(t_game_object *enemy, sfVector2f pos_e, sfVector2f pos_r);

/* MANAGE LIFE */
void is_on_castle(sfVector2f pos_castle, sfVector2f pos_enemy,
int *life, int damage);
void manage_life(t_game_object *obj, t_game_object *enemy,
t_instance *instance, t_text *texts);

/* MANAGE MOVE */
void manage_move(t_game *game);

/* MENU */
void manage_menu(t_game *game);

/* SCORE */
char *get_score(void);
void save_score(t_instance *instance, char *score);
void reset_score(t_game *game);

#endif
