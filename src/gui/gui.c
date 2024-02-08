//
// Created by kubun on 03/02/24.
//

#include "stdlib.h"
#include "unistd.h"

#include "gui.h"


//TODO: Create a menu bar that will be included in all games
//
// btn1 = change cat; btn2 = change difficulty; btn3 = fill the whole word;
// void menu_bar();

void display(void){
    initscr();

    int height, width, start_y, start_x;
    height = 10;    width = 30;     start_y = start_x = 10;

    WINDOW *win = newwin(height, width, start_y, start_x);
    refresh();

    box(win, 0, 0);
    mvwprintw(win, 1, 1, "This is my box");
    wrefresh(win);

    int c = getch();


    printw("%d", c);

    endwin();
}