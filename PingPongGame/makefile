#This is the makefile for the pong game	

pong:  collision.o initialization.o draw.o pong_sp.o
	gcc -o pong pong_sp.o collision.o initialization.o draw.o -lrt  -lncurses

pong_sp : pong_sp.c
	gcc -c pong_sp.c -lrt -lncurses
  
collision: collision.c collision.h
	gcc -c collision.c -lrt  -lncurses

initialization: initialization.c  initialization.h
	gcc -c initialization.c -lrt -lncurses

draw: draw.c draw.h -lncurses
	gcc -c draw.c -lrt -lncurses



clean:
	rm pong *.o
