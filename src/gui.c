//
// Created by kubun on 03/02/24.
//

#include "gui.h"
#include "stdlib.h"


void display(void){
    initscr();

    int height, width, start_y, start_x;
    height = 10;    width = 30;     start_y = start_x = 10;

    WINDOW *win = newwin(height, width, start_y, start_x);
    refresh();

    box(win, 0, 0);
    wrefresh(win);




    /*rectangle(int y1, int x1, int y2, int x2)
    {
        mvhline(y1, x1, 0, x2-x1);
        mvhline(y2, x1, 0, x2-x1);
        mvvline(y1, x1, 0, y2-y1);
        mvvline(y1, x2, 0, y2-y1);
        mvaddch(y1, x1, ACS_ULCORNER);
        mvaddch(y2, x1, ACS_LLCORNER);
        mvaddch(y1, x2, ACS_URCORNER);
        mvaddch(y2, x2, ACS_LRCORNER);
    }

    boite= subwin(stdscr, 10, 10, LINES / 2, COLS /2);
    wborder(boite, '|', '|', '-', '-', '+', '+', '+', '+');
    wrefresh(boite); */

    int c = getch();

    printw("%d", c);


    endwin();
}