#include <ncurses.h>
#include <stdlib.h>
#include <unistd.h>
#include "initialization.h"

 //int hits = 0, misses = 0, best = 0, streak = 0, quit = 0, frame = 1, max_y,
   //     max_x;

void initialization()
{
	system("clear");
    initscr();
    curs_set(0);
    cbreak();
    noecho();
    nodelay(stdscr, 1);
    start_color();
    init_pair(1, COLOR_CYAN, COLOR_BLACK);
    init_pair(2, COLOR_YELLOW, COLOR_BLACK);
    init_pair(3, COLOR_GREEN, COLOR_BLACK);
    getmaxyx(stdscr, max_y, max_x);
    ball.py = max_y / 2;
    ball.px = max_x / 2;
    ball.dy = rand() & 1 ? 1 : -1;
    ball.dx = rand() & 1 ? 1 : -1;
    paddle.length = 6;
    paddle.py = (max_y / 2) - (paddle.length / 2);
    paddle.px = max_x - 3;

};
