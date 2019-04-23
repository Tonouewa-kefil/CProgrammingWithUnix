#ifndef MY_INITIALIZATION_H_
#define MY_INITIALIZATION_H_

#define BALL_SYMBOL "O"
#define BORDER "#"
#define PADDLE "||"

#define SLEEP_TIME 20000
  struct Ball {
    int px, py, dx, dy;
};

struct Paddle {
    int px, py, length;
};
struct Ball ball;
struct Paddle paddle;
int hits, misses, best, streak, quit, frame, max_y,
        max_x;

        
  void initialization();
  
  
#endif //MY_INITIALIZATION_H_