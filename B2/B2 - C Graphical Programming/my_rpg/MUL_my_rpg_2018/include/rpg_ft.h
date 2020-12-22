/*
** EPITECH PROJECT, 2019
** MY_RPG
** File description:
** header
*/

#ifndef RPG_FT_H
#define RPG_FT_H

int rpg(void);

/********************
    LOADING FUNCTION
********************/
int loading_screen(sfRenderWindow *window);

/********************
    DELETE FUNCTION
********************/
void delete_all(t_rpg *game);
void delete_inside_button(t_button *to_delete);
t_button *delete_button(t_button *list_button, t_button *to_delete);
void delete_list_buttons(t_button *list);
void delete_list_musics(t_music *list);
void delete_list_objs(t_game_object *list);
void delete_list_texts(t_text *list);
void delete_inside_music(t_music *to_delete);
t_music *delete_music(t_music *list_music, t_music *to_delete);
void *delete_inside_obj(t_game_object *to_delete);
t_game_object *delete_obj(t_game_object *list_obj, t_game_object *to_delete);
void delete_player(t_player *player);
void delete_scenes_array(t_scenes **array);
void delete_inside_text(t_text *to_delete);
t_text *delete_text(t_text *list_text, t_text *to_delete);
void delete_particle_system(t_particle_info *system);
void *delete_particle_system_array(t_particle_info **array);
void delete_particle(t_particle *particle);
void delete_list_npc(t_npc *list);

/********************
    EVENT FUNCTION
********************/
//MOVE_PLAYER
bool is_obj(enum move pos, t_player *player, t_scenes *scenes);
bool limit_map_left(t_rpg *game, int max);
bool limit_map_right(t_rpg *game, int max);
bool limit_map_top(t_rpg *game, int max);
bool limit_map_bot(t_rpg *game, int max);
void move_bot(t_rpg *game);
void move_left(t_rpg *game);
void move_player(t_rpg *game);
void move_right(t_rpg *game);
void move_top(t_rpg *game);

int event(t_rpg *game);
int window_close(sfEvent event, sfRenderWindow *window);
int event_keyboard(t_rpg *game);
int event_button(sfRenderWindow *window, sfEvent event,
t_scenes *scene, t_rpg *game);
int volume_up_main_music(t_rpg *game);
int volume_down_main_music(t_rpg *game);
int volume_mute_main_music(t_rpg *game);
int volume_mute_effect_music(t_rpg *game);
int volume_up_effect_music(t_rpg *game);
int volume_down_effect_music(t_rpg *game);
int back(t_rpg *game);
int stop_all_music(t_rpg *game);
int menu_settings(t_rpg *game);
int quit_game(t_rpg *game);
int menu_htp(t_rpg *game);
int play_start(t_rpg *game);
int play_attrib(t_rpg *game);
int continue_game(t_rpg *game);
int menu_pause(t_rpg *game);
int restart_game(t_rpg *game);
int create_men(t_rpg *game);
int create_girl(t_rpg *game);
int plus_skill1(t_rpg *game);
int minus_skill1(t_rpg *game);
int plus_skill2(t_rpg *game);
int minus_skill2(t_rpg *game);
int plus_skill3(t_rpg *game);
int minus_skill3(t_rpg *game);
int plus_skill4(t_rpg *game);
int minus_skill4(t_rpg *game);
int start_game1(t_rpg *game);
int start_game2(t_rpg *game);
void restart_clock(sfClock *clock);
int close_inventory(t_rpg *game);
int go_inventory(t_rpg *game);
int go_update_attrib(t_rpg *game);
int go_conv_scene(t_rpg *game, t_npc *npc);
int quit_conv_scene(t_rpg *game);
int check_action(t_rpg *game);
int check_action_obj(t_rpg *game);
int delete_obj1_inv(t_rpg *game);
int delete_obj2_inv(t_rpg *game);
int delete_obj3_inv(t_rpg *game);
int delete_obj4_inv(t_rpg *game);
int delete_obj5_inv(t_rpg *game);
int delete_obj6_inv(t_rpg *game);
int go_fight_scene(t_rpg *game, t_npc *enemy);
int attack(t_rpg *game);
int defense(t_rpg *game);
int special(t_rpg *game);
int quit_fight_scene(t_rpg *game);
int go_end(t_rpg *game);

/********************
    INIT FUNCTION
********************/
t_rpg *init(void);
t_rpg *init_rpg(void);
int init_renderwindow(t_rpg *game);
int init_game(t_rpg* game);
t_settings *init_settings(void);

/********************
    DRAW FUNCTION
********************/
void draw_scene(t_player *player, sfRenderWindow *window, t_scenes **scene,
enum scenes current_scenes);
void draw_objs(sfRenderWindow *window, t_scenes *scene);
void draw_buttons(sfRenderWindow *window, t_scenes *scene);
void draw_text(sfRenderWindow *window, t_scenes *scene);
void play_music(t_scenes *scene);
void draw_particle_system(sfRenderWindow *window, t_scenes *scene);
void draw_player(sfRenderWindow *window, t_player *player,
enum scenes current_scenes);
void draw_quest(sfRenderWindow *window, t_scenes *scene,
enum scenes current_scenes);
void draw_npc(sfRenderWindow *window, t_npc *list);

/********************
    LIST FUNCTION
********************/
t_button *add_button(t_button *list, t_button *to_add);
t_game_object *add_object(t_game_object *list, t_game_object *to_add);
t_text *add_text(t_text *list, t_text *to_add);
t_music *add_music(t_music *list, t_music *to_add);
t_npc *add_npc(t_npc *list, t_npc *to_add);

/********************
    MAP FUNCTION
********************/
t_map_obj *collect_info_file_obj(char *filepath);
t_game_object *create_map(char *filepath);
t_game_object *create_obj_a_at_m(sfVector2f pos, int tiles,
t_game_object *tempo);
t_game_object *create_obj_b_at_e(sfVector2f pos, int tiles,
t_game_object *tempo);
t_game_object *create_obj_f_at_g(sfVector2f pos, int tiles,
t_game_object *tempo);
t_game_object *create_obj_h_at_j(sfVector2f pos, int tiles,
t_game_object *tempo);
t_game_object *create_obj_k_at_m(sfVector2f pos, int tiles,
t_game_object *tempo);
t_game_object *create_obj_map(char *filepath);
t_game_object *create_sprite_obj_map(sfIntRect rect, sfVector2f pos,
int max_value, char *filepath);
void delete_map_obj_info(t_map_obj *list);

/********************
    MOVE FUNCTION
********************/
void move_rect(sfSprite *sprite, sfIntRect *rect, int offset, int max_value);

/********************
    OBJECT FUNCTION
********************/
t_game_object *create_object(const char *path, sfVector2f pos,
sfIntRect rect, int max_value);
t_game_object *duplicate_obj(t_game_object *original);
t_game_object *duplicate_obj_attrib(t_game_object *original,
t_game_object *new);
void find_obj_to_delete(t_game_object *list, int quest_nb);

/********************
    MUSIC FUNCTION
********************/
t_music *create_music(char *path, int volume, int loop, enum music type);

/********************
    TEXT FUNCTION
********************/
t_text *create_text(char *str, char *font_p, sfVector2f position, int size);
void list_text_transparence(t_text *list);

/********************
    BUTTONS FUNCTION
********************/
t_button *create_button_position(t_button *new_button, sfVector2f position,
sfVector2f size, sfIntRect rect);
t_button *create_button(char *sprite, enum buttons type, void *callback);
int button_is_clicked(t_button *button, sfVector2i click_position);
void onhover(struct s_button *button);
void onclick(struct s_button *button);
void onnormal(struct s_button *button);

/********************
CALLBACK OBJ FUNCTION
********************/
int open_chest(t_rpg *game, t_game_object *obj);
int go_to_next_scene(t_rpg *game, t_game_object *obj);
int fight_in_house(t_rpg *game, t_game_object *obj);

/********************
    PLAYER FUNCTION
********************/
t_player *init_player(void);
t_player *make_player(t_player *player, char *path,
sfIntRect rect, int max_value);
t_attributs *init_attrib(int gender);
t_game_object *player_to_obj(t_player *player, sfVector2f position);
void update_damage_player(t_player *player);
void update_life_player(t_player *player);

/********************
    PARTICLE FUNCTION
********************/

int get_nb_system(t_particle_info **array);
t_particle_info **add_particle_system(t_particle_info **array,
t_particle_info *system);
t_particle *update_particle(t_particle_info *system, t_particle *particle);
int check_life_particle(t_particle *particle);
t_particle *add_particle(t_particle *list, t_particle *to_add);
t_particle *remove_particle(t_particle *list, t_particle *to_delete);
void generate_form_particle(t_particle *new);
t_particle *create_particle(t_particle_info *info);
t_particle_info *manage_particle_system(t_particle_info *system);
int manage_all_particle_system(t_particle_info **system);
t_particle_info *create_particle_system(sfColor color, sfVector2f pos,
int dp, float size);
/********************
    SCENES FUNCTION
********************/
t_scenes *create_scene(t_game_object *objs, t_button *buttons, t_text *texts,
t_music *musics);
t_scenes **init_scenes_array(void);
int get_nb_scene(t_scenes **scenes);
t_scenes **add_scene(t_scenes **scenes, t_scenes *to_add);
t_scenes **create_all_scenes(t_rpg *game);
/********************
    START FUNCTION
********************/
t_game_object *create_background_start_scene(t_game_object *list_obj);
t_game_object *init_objs_start_scene(void);
t_button *create_start_button_start_scene(t_button *list_button);
t_button *create_htp_button_start_scene(t_button *list_button);
t_button *create_quit_button_start_scene(t_button *list_button);
t_button *create_settings_button_start_scene(t_button *list_button);
t_button *init_buttons_start_scene(void);
t_music *create_background_music_start_scene(t_music *list_music);
t_music *init_musics_start_scene(void);
t_scenes **create_start_scene(t_rpg *game);
/********************
    SETTINGS FUNCTION
********************/
t_scenes **create_settings_scene(t_rpg *game);
t_button *create_volume_music_button_settings_scene(t_button *list_button);
t_button *create_volume_effect_button_settings_scene(t_button *list_button);
t_button *init_buttons_settings_scene(void);
t_game_object *create_background_settings_scene(t_game_object *list_obj);
t_game_object *init_objs_settings_scene(void);
t_text *create_text_settings_scene(t_text *list_text);
t_text *init_texts_settings_scene(void);
t_text *create_title_settings_scene(t_text *list_text);
t_text *create_text_volume_settings_scene(t_text *list_text);
t_text *init_texts_settings_scene(void);
t_music *create_background_music_settings_scene(t_music *list_music);
t_music *init_musics_settings_scene(void);
/********************
    HTP FUNCTION
********************/
t_scenes **create_htp_scene(t_rpg *game);
t_button *init_buttons_htp_scene(void);
t_game_object *create_background_htp_scene(t_game_object *list_obj);
t_game_object *init_objs_htp_scene(void);
t_text *create_text_htp_scene(t_text *list_text);
t_text *init_texts_htp_scene(void);
t_text *create_title_htp_scene(t_text *list_text);
t_text *init_texts_htp_scene(void);
t_music *create_background_music_htp_scene(t_music *list_music);
t_music *init_musics_htp_scene(void);
/********************
    GAME1 FUNCTION
********************/
t_scenes **create_game1_scene(t_rpg *game);
t_game_object *init_objs_game1_scene(void);
t_npc *create_npc1_game1_scene(t_npc *list);
t_npc *create_npc2_game1_scene(t_npc *list);
t_npc *init_npc_game1_scene(void);
t_npc *create_sensei(t_npc *list, sfVector2f position, char *disc);

/********************
    GAME1 FUNCTION
********************/
t_scenes **create_game2_scene(t_rpg *game);
t_game_object *init_objs_game2_scene(void);
t_npc *create_npc1_game2_scene(t_npc *list);
t_npc *create_npc2_game2_scene(t_npc *list);
t_npc *init_npc_game2_scene(void);
/********************
    QUEST FUNCTION
********************/
t_quest *init_quest(char *filepath);
t_quest *add_quest_in_list(t_quest *list, t_quest *new);
void quest_management_scene1(t_rpg *game);
void quest_management_scene2(t_rpg *game);

/********************
    PAUSE FUNCTION
********************/
t_scenes **create_pause_scene(t_rpg *game);
t_button *create_start_button_pause_scene(t_button *list_button);
t_button *create_restart_button_pause_scene(t_button *list_button);
t_button *create_quit_button_pause_scene(t_button *list_button);
t_button *create_settings_button_pause_scene(t_button *list_button);
t_button *init_buttons_pause_scene(void);
t_game_object *create_background_pause_scene(t_game_object *list_obj);
t_game_object *init_objs_pause_scene(void);
t_text *create_title_pause_scene(t_text *list_text);
t_text *init_texts_pause_scene(void);
t_music *create_background_music_pause_scene(t_music *list_music);
t_music *init_musics_pause_scene(void);
/********************
    PLAYER FUNCTION
********************/
t_scenes **create_player_scene(t_rpg *game);
t_game_object *create_background_player_scene(t_game_object *list_obj);
t_game_object *init_objs_player_scene(void);
t_text *create_title_player_scene(t_text *list_text);
t_text *init_texts_player_scene(void);
t_button *create_men_button_player_scene(t_button *list_button);
t_button *create_girl_button_player_scene(t_button *list_button);
t_button *create_quit_button_player_scene(t_button *list_button);
t_button *init_buttons_player_scene(void);
t_music *create_background_music_player_scene(t_music *list_music);
t_music *init_musics_player_scene(void);

/********************
    ATTRIB FUNCTION
********************/
t_scenes **create_attrib_scene(t_rpg *game);
t_button *create_play_button_attrib_scene(t_button *list_button);
t_button *create_quit_button_attrib_scene(t_button *list_button);
t_button *init_buttons_attrib_scene(void);
t_music *create_background_music_attrib_scene(t_music *list_music);
t_music *init_musics_attrib_scene(void);
t_game_object *create_background_attrib_scene(t_game_object *list_obj);
t_game_object *init_objs_attrib_scene(void);
t_text *create_title_attrib_scene(t_text *list_text);
t_text *init_texts_attrib_scene(void);
t_text *create_tskills_pt_attrib_scene(t_text *list_text);
t_text *create_tskill1_attrib_scene(t_text *list_text);
t_text *create_tskill2_attrib_scene(t_text *list_text);
t_text *create_tskill3_attrib_scene(t_text *list_text);
t_text *create_tskill4_attrib_scene(t_text *list_text);
t_text *create_tskills_attrib_scene(t_text *list_text);
t_text *create_tskill5_attrib_scene(t_text *list_text);
t_text *create_tskill6_attrib_scene(t_text *list_text);
t_text *create_tskill7_attrib_scene(t_text *list_text);
t_game_object *create_skill1_attrib_scene(t_game_object *list_obj);
t_game_object *create_skill2_attrib_scene(t_game_object *list_obj);
t_game_object *create_skill3_attrib_scene(t_game_object *list_obj);
t_game_object *create_skill4_attrib_scene(t_game_object *list_obj);
t_button *create_skill1_button_attrib_scene(t_button *list_button);
t_button *create_skill2_button_attrib_scene(t_button *list_button);
t_button *create_skill3_button_attrib_scene(t_button *list_button);
t_button *create_skill4_button_attrib_scene(t_button *list_button);
void updated_text_attrib_scene(t_text *list_text, t_rpg *game);

/********************
    INTRO FUNCTION
********************/
t_game_object *create_background_intro_scene(t_game_object *list_obj);
t_game_object *init_objs_intro_scene(void);
t_scenes **create_intro_scene(t_rpg *game);
t_music *create_background_music_intro_scene(t_music *list_music);
t_music *init_musics_intro_scene(void);
t_particle_info *init_particle_system_intro_scene(void);
t_text *create_first_text_intro_scene(t_text *list_text);
t_text *init_texts_intro_scene(void);
int manage_intro2(t_rpg *game, float seconds);
/********************
    INVENTORY FUNCTION
********************/
t_scenes **create_inventory_scene(t_rpg *game);
t_button *create_closeb_inventory_scene(t_button *list_button);
t_button *init_buttons_inventory_scene(void);
t_game_object *create_backmenu_inventory_scene(t_game_object *list_obj);
t_game_object *create_background_inventory_scene(t_game_object *list_obj);
t_game_object *init_objs_inventory_scene(void);
t_button *create_volume_music_button_inventory_scene(t_button *list_button);
t_button *create_volume_effect_button_inventory_scene(t_button *list_button);
t_button *create_mute_button_inventory_scene(t_button *list_button);
t_button *create_closeb_inventory_scene(t_button *list_button);
t_button *init_buttons_inventory_scene(void);
t_text *create_title_inventory_scene(t_text *list_text);
t_text *create_objects_inventory_scene(t_text *list_text);
t_text *create_name_inventory_scene(t_text *list_text);
t_text *create_text_volume_inventory_scene(t_text *list_text);
t_text *init_texts_inventory_scene(void);
t_game_object *delete_tmp_obj_inv_scene(t_game_object *list);
t_button *delete_tmp_button_inv_scene(t_button *list);
t_text *delete_tmp_text_inv_scene(t_text *list);
void delete_tmp_inventory_scene(t_scenes *inv_scene);
t_game_object *init_player_inv_scene(t_game_object *list_obj, t_player *player);
t_text *add_tmp_text_inv_scene(t_text *list, t_player *player);
int add_tmp_inventory_scene(t_scenes *inv_scene, t_player *player);
t_game_object *create_pt_inv_scene(t_game_object *list_obj);
t_game_object *create_damage_inv_scene(t_game_object *list_obj);
t_game_object *create_life_inv_scene(t_game_object *list_obj);
t_text *create_skill1_inventory_scene(t_text *list_text);
t_text *create_skill2_inventory_scene(t_text *list_text);
t_text *create_skill3_inventory_scene(t_text *list_text);
t_text *create_skill4_inventory_scene(t_text *list_text);
t_text *create_skill5_inventory_scene(t_text *list_text);
t_text *create_skills_inventory_scene(t_text *list_text);
t_text *create_skill6_inventory_scene(t_text *list_text);
t_text *create_skill7_inventory_scene(t_text *list_text);

/********************
    UPDATE ATTRIB SCENE FUNCTION
********************/
t_scenes **create_update_attrib_scene(t_rpg *game);
t_button *create_continue_button_update_attrib_scene(t_button *list_button);
t_button *init_buttons_update_attrib_scene(void);
t_game_object *create_background_update_attrib_scene(t_game_object *list_obj);
t_game_object *init_objs_update_attrib_scene(void);
t_text *create_title_update_attrib_scene(t_text *list_text);
t_text *init_texts_update_attrib_scene(void);
/********************
    GAME MAIN FUNCTION
********************/
int game_main(t_rpg *game);

/********************
    MANAGE FUNCTION
********************/
void manage_npc(t_npc *list_npc, sfClock *clock);
int manage_conv_scene(t_rpg *game, t_scenes *scene, sfRenderWindow *window);
void changed_text_conv_scene(t_rpg *game, t_text *tmp,
sfRenderWindow *window, t_scenes *scene);
/********************
    INTRO MANAGE FUNCTION
********************/
void display_background_intro(t_rpg *game);
int manage_intro(t_rpg *game);

/********************
    UTILS FUNCTION
********************/
int get_elapsed_time(sfClock *clock);
void delete_transparency_text(t_text *text, int to_delete);
void delete_transparency_objs(t_game_object *obj, int to_delete);
void add_transparency_text(t_text *text, int to_add);
void add_transparency_objs(t_game_object *obj, int to_add);

/********************
    NPC FUNCTION
********************/
t_npc *create_npc(char *filepath, sfVector2f position,
sfIntRect rect, int max_value);
t_npc *init_value_npc(t_npc *new, sfVector2f position,
sfIntRect rect, int max_value);
t_npc *move_npc_left(t_npc *npc);
t_npc *move_npc_right(t_npc *npc);
t_npc *move_npc_up(t_npc *npc);
t_npc *move_npc_down(t_npc *npc);
t_npc *move_npc(t_npc *npc, int seconds);
t_game_object *npc_to_obj(t_npc *npc, sfVector2f position);
int add_text_to_npc(t_npc *npc, char *file);

/********************
    FIGHT SCENE FUNCTION
********************/
t_scenes **create_fight_scene(t_rpg *game);
t_button *init_buttons_fight_scene(void);
t_music *init_musics_fight_scene(void);
t_game_object *init_objs_fight_scene(void);
t_text *init_texts_fight_scene(void);
void delete_tmp_fight_scene(t_scenes *inv_scene);
t_game_object *add_tmp_obj_fight_scene(t_game_object *list,
t_player *player, t_npc *enemy);
int add_tmp_fight_scene(t_scenes *scene, t_player *player, t_npc *enemy);
/********************
    CONV SCENE FUNCTION
********************/
t_scenes **create_conv_scene(t_rpg *game);
t_game_object *init_objs_conv_scene(void);
t_text *init_texts_conv_scene(void);
t_game_object *create_perso1_conv_scene(t_game_object *list_obj, t_npc *npc);
t_game_object *create_perso2_conv_scene(t_game_object *list_obj,
t_player *player);
void delete_tmp_conv_scene(t_scenes *conv_scene);

/********************
    END SCENE FUNCTION
********************/
t_scenes **create_end_scene(t_rpg *game);
t_button *init_buttons_end_scene(void);
t_music *init_musics_end_scene(void);
t_game_object *init_objs_end_scene(void);
t_text *init_texts_end_scene(void);

#endif
