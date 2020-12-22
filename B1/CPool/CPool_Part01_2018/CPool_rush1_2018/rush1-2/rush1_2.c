/*
** EPITECH PROJECT, 2018
** rush1-2
** File description:
** second assignement
*/

void display_slash(int x, int y, int a, int b)
{
    if (a == 0) {
        if (b == 0)
            my_putchar('/');
        if (b == (y - 1))
            my_putchar('\\');
    }
    if (a == (x - 1)) {
        if (b == 0)
            my_putchar('\\');
        if (b == (y - 1))
            my_putchar('/');
    }
}

void display_corner(int x, int y, int a, int b)
{
    if (x != 1 && y != 1)
        display_slash(x, y, a, b);
    else
        if ((a == 0 || a == (x - 1)) && (b == 0 || b == (y - 1)))
            my_putchar('*');
}

void rush_display(int x, int y, int a, int b)
{
    if (a == x)
        my_putchar('\n');
    if (a != 0 && a < (x - 1)) {
        if (b == 0 || b == (y - 1))
            my_putchar('*');
    }
    if (a == 0 || a == (x - 1)) {
        if (b != 0 && b < (y - 1))
            my_putchar('*');
    }
    display_corner(x, y, a, b);
    if (b != 0 && b < (y - 1))
        if (a != 0 && a < (x - 1))
            my_putchar(' ');
}

void rush(int x, int y)
{
    int a = 0;
    int b = 0;

    if (x < 1 || y < 1) {
        my_puterr("Invalid size\n");
        return;
    }
    for (; b < y; b++) {
        for (; a <= x; a++)
            rush_display(x, y, a, b);
        a = 0;
    }
}
