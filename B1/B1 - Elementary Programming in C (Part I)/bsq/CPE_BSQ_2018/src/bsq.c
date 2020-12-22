/*
** EPITECH PROJECT, 2018
** BSQ
** File description:
** main file
*/

#include <bsq.h>

int main(int argc, char **argv)
{
    int nb_rows = 0;
    int nb_cols = 0;
    char *str = "";
    char **tab;

    test_argc(argc);
    str = create_str(argv);
    nb_rows = my_getnbr(str);

    if (nb_rows == 0)
        exit(84);

    check_map_rows(str, nb_rows);
    nb_cols = get_nb_cols(str);
    tab = str_to_2d_array(str, nb_rows, nb_cols);
    resolve_map(tab, nb_rows, nb_cols);

    return 0;
}
