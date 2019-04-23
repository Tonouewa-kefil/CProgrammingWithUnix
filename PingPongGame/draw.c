#include <ncurses.h>
#include <stdlib.h>
#include <unistd.h>
#include "initialization.h"
#include "draw.h"


void drawing()
{
	getmaxyx(stdscr, max_y, max_x);
        mvprintw(
            0, 0,
            "Hits: %d     Misses: %d     Streak: %d     Best: %d     Time: %d",
            hits, misses, streak, best, frame / 50);  // draw stats
        attron(COLOR_PAIR(3));
        int i;
        for ( i = 0; i < max_x; i++) {  // draw top borders 
            mvprintw(1, i, BORDER);
            mvprintw(max_y - 1, i, BORDER);
        }
        for ( i = 1; i < max_y; i++) {  // draw side border
            mvprintw(i, 0, BORDER);
        }
        attroff(COLOR_PAIR(3));
        attron(COLOR_PAIR(1));
        paddle.px = max_x - 3;  // in case window was resized update paddle x-pos
        for ( i = 0; i < paddle.length; i++) {
            mvprintw(paddle.py + i, paddle.px, PADDLE);  // draw paddle
        }
        attroff(COLOR_PAIR(1));
        attron(COLOR_PAIR(2));
        mvprintw(ball.py, ball.px, BALL_SYMBOL);  // draw ball
        attroff(COLOR_PAIR(2));
	
	
	
};
