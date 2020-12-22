/*
** EPITECH PROJECT, 2018
** my_rpg
** File description:
** switch_create_tiles_obj
*/

#include "rpg.h"

t_game_object *create_obj_a_at_m(sfVector2f pos, int tiles,
t_game_object *tempo)
{
    sfIntRect rect = {0, 0, 53, 54};

    if (tiles == 0) {
        rect.left = 26 * (tiles - 0);
        tempo->max_value = 54;
        tempo->offset = 54;
        if ((tempo = create_sprite_obj_map(rect, pos, tempo->max_value,
            "./ressources/decorations/river.png")) == NULL)
            return (NULL);
    }
    if ((tempo = create_obj_b_at_e(pos, tiles, tempo)) == NULL)
        return (NULL);
    return (tempo);

}

t_game_object *create_obj_b_at_e(sfVector2f pos, int tiles,
t_game_object *tempo)
{
    sfVector2f scale = {3.80, 3.80};
    sfIntRect rect = {0, 0, 26, 15};

    if (tiles >= 1 && tiles <= 4) {
        rect.left = 26 * (tiles - 1);
        tempo->max_value = 104;
        tempo->offset = 26;
        if ((tempo = create_sprite_obj_map(rect, pos, tempo->max_value,
            "./ressources/decorations/rock.png")) == NULL)
            return (NULL);
        sfSprite_setScale(tempo->sprite, scale);
    }
    if ((tempo = create_obj_f_at_g(pos, tiles, tempo)) == NULL)
        return NULL;
    return (tempo);
}

t_game_object *create_obj_f_at_g(sfVector2f pos, int tiles,
t_game_object *tempo)
{
    sfVector2f scale = {4, 4};
    sfIntRect rect = {0, 0, 25, 27};
    if (tiles >= 5 && tiles <= 6) {
        rect.left = 25 * (tiles - 5);
        tempo->max_value = 50;
        tempo->offset = 25;
        if ((tempo = create_sprite_obj_map(rect, pos, tempo->max_value,
            "./ressources/decorations/chest.png")) == NULL)
            return NULL;
        tempo->callback = &open_chest;
        sfSprite_setScale(tempo->sprite, scale);
    }
    if ((tempo = create_obj_h_at_j(pos, tiles, tempo)) == NULL)
        return NULL;
    return tempo;
}

t_game_object *create_obj_h_at_j(sfVector2f pos, int tiles,
t_game_object *tempo)
{
    sfVector2f scale = {3, 3};
    sfIntRect rect = {0, 0, 20, 20};
    if (tiles >= 7 && tiles <= 9) {
        rect.left = 20 * (tiles - 7);
        tempo->max_value = 60;
        tempo->offset = 20;
        if ((tempo = create_sprite_obj_map(rect, pos, tempo->max_value,
            "./ressources/decorations/obj.png")) == NULL)
            return NULL;
        sfSprite_setScale(tempo->sprite, scale);
        if (tiles == 8)
            tempo->callback = &go_to_next_scene;
    }
    if ((tempo = create_obj_k_at_m(pos, tiles, tempo)) == NULL)
        return NULL;
    return tempo;
}

t_game_object *create_obj_k_at_m(sfVector2f pos, int tiles,
t_game_object *tempo)
{
    sfVector2f scale = {3.00, 3.00};
    sfIntRect rect = {0, 0, 70, 88};

    if (tiles >= 10 && tiles <= 13) {
        rect.left = 70 * (tiles - 10);
        tempo->max_value = 210;
        tempo->offset = 70;
        if ((tempo = create_sprite_obj_map(rect, pos, tempo->max_value,
            "./ressources/decorations/wood.png")) == NULL)
            return NULL;
        sfSprite_setScale(tempo->sprite, scale);
        if (tiles == 10)
            tempo->callback = &fight_in_house;
    }
    return tempo;
}
