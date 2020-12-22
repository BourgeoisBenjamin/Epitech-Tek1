/*
** EPITECH PROJECT, 2019
** TETRIS
** File description:
** main
*/

#include "bstetris.h"

t_piece *get_size_color(t_piece *piece, int fd)
{
    char **array_info = NULL;
    char *line = get_next_line(fd);
    if (line == NULL)
        return (NULL);
    if ((array_info = my_str_to_word_array(line, ' ')) == NULL)
        return (NULL);
    if (get_size_array(array_info) != 3)
        return (NULL);
    if (!my_str_is_num(array_info[0]) || !my_str_is_num(array_info[1]) || !my_str_is_num(array_info[2]))
        return (NULL);
    piece->width = my_getnbr(array_info[0]);
    piece->height = my_getnbr(array_info[1]);
    piece->color = my_getnbr(array_info[2]);
    return (piece);
}

t_piece *get_form(t_piece *piece, int fd)
{
    int line_no = 0;
    char *line = NULL;
    if ((piece->form = malloc(sizeof(char*) * (piece->height + 1))) == NULL)
        return (NULL);
    for (; (line = get_next_line(fd)) != NULL; line_no++) {
        piece->form[line_no] = line;
    }
    if (line_no != piece->height)
        return (NULL);
    piece->form[line_no] = NULL;
    return (piece);
}

int fd_open_file(char *path, int flags)
{
    int fd = -1;
    if ((fd = open(path, flags)) == -1)
        my_printe("Error : open() failed\nIs %s exist ?\n", path);
    return (fd);
}

t_piece *get_name(t_piece *piece, char *path_piece)
{
    char **array = my_str_to_word_array(path_piece, '.');
    if (array == NULL)
        return (NULL);
    piece->name = array[0];
    return (piece);
}

void display_info(t_piece *piece)
{
    my_printf("Tetriminos : Name %s : Size %i*%i : Color %i :\n", piece->name, piece->width, piece->height, piece->color);
    print_array(piece->form);
}

int get_info_piece(char *path_piece)
{
    t_piece *piece = malloc(sizeof(t_piece));
    if (piece == NULL)
        return (84);
    int fd = fd_open_file(path_piece, O_RDONLY);
    if (fd == -1)
        return (84);
    if ((piece = (get_name(piece, path_piece))) == NULL)
        return (84);
    if ((piece = (get_size_color(piece, fd))) == NULL)
        return (84);
    if ((piece = get_form(piece, fd)) == NULL)
        return (84);
    close(fd);
    display_info(piece);
    return (0);
}

int main(int argc, char **argv)
{
    (void)argc;
    return (get_info_piece(argv[1]));
}
