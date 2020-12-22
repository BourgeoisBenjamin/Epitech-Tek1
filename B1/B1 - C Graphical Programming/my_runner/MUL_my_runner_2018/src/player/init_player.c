/*
** EPITECH PROJECT, 2018
** my_runner
** File description:
** init_player
*/

#include <runner.h>

void init_player(t_game *game, t_instance *instance)
{
    if (instance->player == 1) {
        init_player_1(game->player, game->player_jump);
    } else if (instance->player == 2) {
        init_player_2(game->player, game->player_jump);
    }
}

void init_player_1(t_list *player, t_list *player_jump)
{
    my_printf("[LOADING] Player1\n");
    char *player_s[] = {"sprite/character.png", "sprite/character_jump.png"};

    sfVector2f position[] = {{WIDTH / 8, 720}, {WIDTH / 8, 720}};
    sfIntRect rect[] = {{0, 0, OFFSET_P, HEIGHT_P},
    {0, 0, OFFSET_PJ, HEIGHT_PJ}};

    t_game_object *temp = create_object(player_s[0], position[0], rect[0]);
    add_sprite(player, temp);
    player->start->max_value = MAX_P;
    player->start->offset = OFFSET_P;
    player->start->music = sfMusic_createFromFile("sprite/sound/cat_jump.ogg");

    t_game_object *temp2 = create_object(player_s[1], position[1], rect[1]);
    add_sprite(player_jump, temp2);
    player_jump->start->max_value = MAX_PJ;
    player_jump->start->offset = OFFSET_PJ;
}

void init_player_2(t_list *player, t_list *player_jump)
{
    my_printf("[LOADING] Player2\n");
    char *player_s[] = {"sprite/character2.png", "sprite/character_jump2.png"};

    sfVector2f position[] = {{WIDTH / 8, HEIGHT - 400},
    {WIDTH / 8, HEIGHT - 400}};
    sfIntRect rect[] = {{0, 0, OFFSET_P, HEIGHT_P},
    {0, 0, OFFSET_PJ, HEIGHT_PJ}};

    t_game_object *temp = create_object(player_s[0], position[0], rect[0]);
    add_sprite(player, temp);
    player->start->max_value = MAX_P;
    player->start->offset = OFFSET_P;

    t_game_object *temp2 = create_object(player_s[1], position[1], rect[1]);
    add_sprite(player_jump, temp2);
    player_jump->start->max_value = MAX_PJ;
    player_jump->start->offset = OFFSET_PJ;
}