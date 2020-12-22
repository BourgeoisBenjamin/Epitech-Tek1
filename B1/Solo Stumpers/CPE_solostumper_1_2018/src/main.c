/*
** EPITECH PROJECT, 2019
** Sort_Words
** File description:
** main
*/

#include <sort_words.h>

int params_to_list(char **argv, t_list *l_words)
{
    int j = 0;
    int i = 0;

    while (argv[1][i + j] != '\0') {
        if (i != 0) {
            i++;
        }
        while (argv[1][i + j] != ' ' && argv[1][i + j] != '\t' && argv[1][i + j] != '\0') {
            j++;
        }
        l_words = t_list_append(l_words, argv[1] + i, j + 1);
        i = i + j;
        j = 0;
    }
    return 0;
}

int sort_list(t_list *l_words)
{
    while (i < l_words->length)
        
}

int main(int argc, char **argv)
{
    if (argc < 2) {
        my_printf("\n");
        return 0;
    }

    t_list *l_words = t_listnew();

    if (l_words == NULL)
        return 84;

    params_to_list(argv, l_words);
    t_list_display(l_words);
    t_list_delete(&l_words);

    return 0;
}
