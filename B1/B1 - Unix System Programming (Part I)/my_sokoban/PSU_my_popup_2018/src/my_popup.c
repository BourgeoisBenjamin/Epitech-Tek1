/*
** EPITECH PROJECT, 2018
** my_sokoban
** File description:
** my_popup
*/

#include <popup.h>

int my_popup(char *str)
{
    initscr();
    int len = my_strlen(str);
    int x = 0;
    int y = 0;
    int cd;

    while (1) {
        clear();
        mvprintw(LINES / 2 + x, ((COLS / 2) - len / 2) + y, str);
        refresh();
        cd = getch();
        
        switch (cd) {
        case 32:
            endwin();
            exit(0);
            break;
        case 68:
            y--;
            break;
        case 65:
            x--;
            break;
        case 66:
            x++;
            break;
        case 67:
            y++;
            break;
        }
    }
    endwin();
    return 0;
}
