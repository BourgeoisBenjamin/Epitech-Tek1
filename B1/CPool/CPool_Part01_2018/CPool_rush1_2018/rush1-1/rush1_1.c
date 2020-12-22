/*
** EPITECH PROJECT, 2018
** rush 1-1
** File description:
** first assign
*/

void rush_display(int x, int y, int a, int b)
{
    if (a == x)
        my_putchar('\n');
    if (a == 0 || a == (x - 1)) {
        if (b == 0 || b == (y - 1))
            my_putchar('o');
        if (b > 0 && b < (y - 1))
            my_putchar('|');
    }
    if (a > 0 && a < (x - 1)) {
        if (b == 0 || b == (y - 1))
            my_putchar('-');
        if (b > 0 && b < (y - 1))
            my_putchar(' ');
    }
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
