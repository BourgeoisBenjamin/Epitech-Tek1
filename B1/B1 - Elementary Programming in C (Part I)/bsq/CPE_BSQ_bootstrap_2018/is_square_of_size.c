/*
** EPITECH PROJECT, 2018
** Bootstrap BSQ
** File description:
** is_square_of_size.c
*/

int is_square_of_size(char **tab, int row, int col, int square_size)
{
    int i = 0;
    int j = 0;

    char map[6][5] = {{'.','.','.','.','.'},
                    {'.','.','.','.','.'},
                    {'.','.','.','.','.'},
                    {'.','.','.','.','.'},
                    {'.','.','.','.','.'},
                    {'.','.','.','.','.'}};
    
    //my_putchar('c');
    //my_putchar(map[1][1]);
    for (i = row; i < square_size; i++) {
        for (j = col; j < square_size; j++) {
            if (map[i][j] != '.')
                return 0;
            //my_putchar(map[i][j]);
        }
        j = 0;
    }
    my_putstr("yes");
    return 1;
}
