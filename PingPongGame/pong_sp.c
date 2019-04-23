#include <ncurses.h>
#include <stdlib.h>
#include <unistd.h>
#include "initialization.h"
#include "collision.h"
#include "draw.h"

int main(void) {

    initialization();
    // game logic
    while (!quit) {
        drawing();
        collision();
       
        // input
        switch (getch()) {
            case 'j':
                if (paddle.py - 1 > 1) paddle.py -= 1;
                break;

            case 'k':
                if ((paddle.py + paddle.length) + 1 < max_y) paddle.py += 1;
                break;

            case 'Q':
                quit = 1;
                break;
        }
        frame++;
        usleep(SLEEP_TIME);
	clear();   
 }
    // exit
    endwin();
    system("clear");
    return 0;
}
