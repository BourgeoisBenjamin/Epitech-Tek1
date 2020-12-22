/*
** EPITECH PROJECT, 2018
** GetNextLine - Bootstrap
** File description:
** get_nb_calls
*/

int get_nb_calls(void)
{
    static int nb = 0;
    nb++;
    return nb;
}