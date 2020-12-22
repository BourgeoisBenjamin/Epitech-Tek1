/*
** EPITECH PROJECT, 2018
** my_runner
** File description:
** parser
*/

#include <runner.h>

int parser(t_game *game, char *path, t_instance *instance)
{
    if (instance->infinity)
        return 0;
    t_parser *map = malloc(sizeof(t_parser));
    if (map == NULL || init_parser(map, path) == 84)
        return 84;
    int i = 0;
    while ((map->read = getline(&map->line, &map->len, map->fd)) != -1
        && i < 6) {
        if (check_map(map->line) == 84) {
            write(2, "Invalid Format file, please check .legend file\n", 47);
            return 84;
        }
        i++;
        create_map(game, map);
    }
    if (map->line)
        free(map->line);
    fclose(map->fd);
    free(map);
    return 0;
}