#include <ncurses.h>
#include <stdlib.h>
#include <unistd.h>
#include "initialization.h"
#include "collision.h"


void collision()
{
	if ((ball.py + ball.dy) < 2 ||
            (ball.py + ball.dy) > max_y - 2) {  // ball-top collision
            ball.dy *= -1;
        }
        if ((ball.px + ball.dx) < 1) {  // ball-side collision
            ball.dx *= -1;
        }
        if ((ball.px + ball.dx == paddle.px) &&
            (ball.py + ball.dy >= paddle.py) &&
            (ball.py + ball.dy <=
             (paddle.py + paddle.length))) {  // ball-paddle collision
            hits++;
            streak++;
            if (streak > best) best = streak;
            ball.dx *= -1;
        }
        if (ball.px > max_x) {  // ball has passed the paddle
            misses++;
            streak = 0;
            ball.py = max_y / 2;
            ball.px = max_x / 2;
            ball.dy = rand() & 1 ? 1 : -1;
            ball.dx = rand() & 1 ? 1 : -1;
        }
        if (frame % 4 == 0) {
            ball.py += ball.dy;
            ball.px += ball.dx;
        }
	
	
}
