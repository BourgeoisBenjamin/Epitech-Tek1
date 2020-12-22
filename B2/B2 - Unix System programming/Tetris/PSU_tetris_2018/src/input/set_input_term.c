/*
** EPITECH PROJECT, 2019
** TETRIS
** File description:
** set_input_term
*/

#include "tetris.h"

void set_input_term(int mode)
{
    static struct termios termsave;
    static struct termios term;

    if (mode == 1) {
        ioctl(0, TCGETS, &termsave);
        ioctl(0, TCGETS, &term);
        term.c_lflag &= ~ECHO;
        term.c_lflag &= ~ICANON;
        ioctl(0, TCSETS, &term);
    } else if (mode == 2) {
        ioctl(0, TCGETS, &termsave);
        ioctl(0, TCGETS, &term);
        term.c_lflag &= ~ECHO;
        term.c_lflag &= ~ICANON;
        term.c_cc[VMIN] = 0;
        term.c_cc[VTIME] = 1;
        ioctl(0, TCSETS, &term);
    } else {
        ioctl(0, TCSETS, &termsave);
    }
}
