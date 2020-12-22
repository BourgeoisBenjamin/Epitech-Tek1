/*
** EPITECH PROJECT, 2018
** my_runner
** File description:
** header_manage
*/

#ifndef RUNNER_MANAGE_H
#define RUNNER_MANAGE_H

/* EVENT */
void event(t_game *game, t_instance *instance, char **argv);
void windows_close(t_game *game, t_instance *instance);
void start(t_game *game, t_instance *instance);
void is_jump(t_game *game, t_instance *instance);
void is_pause(t_game *game, t_instance *instance);
void is_lose(t_game *game, t_instance *instance);
void is_restart(t_game *game, t_instance *instance, char **argv);
void restart_map(t_game *game, t_instance *instance, char **argv);

/* PARALLAX */
void init_parallax(t_game *game);
void parallax(t_list *parallax);

/* MENU */
void init_menu(t_game *game);
void menu(t_game *game);

/* GAME */
void game_main(t_game *game, t_instance *instance);
void game_main2(t_game *game, t_instance *instance);
void init_life(t_game *game);

/* DRAW_SPRITE */
void draw_all_sprite(t_game *game, t_instance *instance);
void draw_sprite_list(t_game *game, t_list *list);

/* PLAYER */
void init_player(t_game *game, t_instance *instance);
void init_player_1(t_list *player, t_list *player_jump);
void init_player_2(t_list *player, t_list *player_jump);
void player(t_game *game, t_instance *instance);
void jump(t_list *player_jump);
void manage_jump(t_list *player_jump, t_instance *instance);
void enemy(t_game *game, t_instance *instance);
void manage_fall(t_game *game, t_instance *instance);
void fall(t_list *player);
void stop_fall(t_game *game, t_instance *instance);

/* TEXT */
sfText *create_text(char *str, char *font, sfVector2f position, int size);
sfText *create_score(char *str, char *font, sfVector2f position, int size);

/* SCORE */
void score(t_game *game, t_instance *instance);

/* PAUSE */
void init_pause(t_game *game);
void pause_game(t_game *game, t_instance *instance);

#endif