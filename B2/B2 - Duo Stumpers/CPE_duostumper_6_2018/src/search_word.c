/*
** EPITECH PROJECT, 2019
** search word
** File description:
** search word
*/

#include "boggle.h"

int search_next_letter_v(char **grid, int *pos, char *word, int i)
{
    if (word[i] == '\0')
        return (1);
    if (pos[0] != 0 && grid[pos[0] - 1][pos[1]] == word[i]) {
        grid[pos[0] - 1][pos[1]] -= 'a' - 'A';
        pos[0]--;
        if (search_next_letter_v(grid, pos, word, i + 1))
            return (1);
        grid[pos[0]][pos[1]] += 'a' - 'A';
        pos[0]++;
    }
    if (grid[pos[0] + 1] && grid[pos[0] + 1][pos[1]] == word[i]) {
        grid[pos[0] + 1][pos[1]] -= 'a' - 'A';
        pos[0]++;
        if (search_next_letter_v(grid, pos, word, i + 1))
            return (1);
        grid[pos[0]][pos[1]] += 'a' - 'A';
        pos[0]--;
    }
    return (search_next_letter_h(grid, pos, word, i));
}

int search_next_letter_h(char **grid, int *pos, char *word, int i)
{
    if (pos[1] != 0 && grid[pos[0]][pos[1] - 1] == word[i]) {
        grid[pos[0]][pos[1] - 1] -= 'a' - 'A';
        pos[1]--;
        if (search_next_letter_v(grid, pos, word, i + 1))
            return (1);
        grid[pos[0]][pos[1]] += 'a' - 'A';
        pos[1]++;
    }
    if (grid[pos[0]][pos[1] + 1] && grid[pos[0]][pos[1] + 1] == word[i]) {
        grid[pos[0]][pos[1] + 1] -= 'a' - 'A';
        pos[1]++;
        if (search_next_letter_v(grid, pos, word, i + 1))
            return (1);
        grid[pos[0]][pos[1]] += 'a' - 'A';
        pos[1]--;
    }
    return (0);
}

int search_word(boggle_t *info, char *word)
{
    int pos[2] = {0, 0};
    int find = -1;

    for (int i = 0; i < info->size * info->size; i++) {
        if (info->grid[i / info->size][i % info->size] == word[0]) {
            pos[0] = i / info->size;
            pos[1] = i % info->size;
            info->grid[pos[0]][pos[1]] -= 'a' - 'A';
            find = search_next_letter_v(info->grid, pos, word, 1);
        }
        if (find == 1) {
            display_grid(info);
            return (1);
        }
        if (find == 0) {
            find = -1;
            info->grid[pos[0]][pos[1]] += 'a' - 'A';
        }
    }
    my_printf("The word \"%s\" is not in the grid.\n", word);
    return (0);
}
