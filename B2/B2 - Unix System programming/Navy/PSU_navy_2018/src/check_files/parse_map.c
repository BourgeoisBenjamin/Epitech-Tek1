/*
** EPITECH PROJECT, 2019
** NAVY
** File description:
** parse function file
*/

#include "navy.h"

char** parse_map_enemy(void)
{
    char **map = create_array(8, 8);
    if (map == NULL)
        return NULL;
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            map[i][j] = '.';
        }
    }
    return map;
}

char **parse_map_player(char *file)
{
    int fd = open_file(file);
    char **map = parse_map_enemy();
    char *line = NULL;
    if (fd == -1 || map == NULL)
        return NULL;
    while ((line = get_next_line(fd)) != NULL) {
        create_boat(line, map);
        free(line);
    }
    close(fd);
    return map;
}

int verif_map(char **map)
{
    int b2 = 0;
    int b3 = 0;
    int b4 = 0;
    int b5 = 0;
    for (int i = 0; map[i]; i++) {
        for (int j = 0; map[i][j]; j++) {
            b2 = (map[i][j] == '2') ? b2 + 1 : b2;
            b3 = (map[i][j] == '3') ? b3 + 1 : b3;
            b4 = (map[i][j] == '4') ? b4 + 1 : b4;
            b5 = (map[i][j] == '5') ? b5 + 1 : b5;
        }
    }
    if (b2 != 2 || b3 != 3 || b4 != 4 || b5 != 5)
        return -1;
    return 0;
}

int parse_map(char *file, t_game *info)
{
    if (check_file(file) == -1)
        return -1;
    if ((info->enemy->map = parse_map_enemy()) == NULL)
        return -1;
    if ((info->player->map = parse_map_player(file)) == NULL)
        return -1;
    if ((verif_map(info->player->map) == -1)) {
        my_printe("Invalid map position. Type ./navy -h\n");
        return -1;
    }
    return 0;
}
