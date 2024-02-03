//
// Created by kubun on 03/02/24.
//

#include "gui.h"

void display(void){
    initscr();
    start_color();

    int x, y;
    x = y = 10;

    move(y, x);

    char *ch = "I am back";
    printw("%s", ch);

    refresh();

    getch();

    endwin();
}