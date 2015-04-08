CC=gcc
OPTS=-g
LIBS=-lX11 -lXdamage -lcairo

all: xpandwindow
xpandwindow: xpand.c xpandwindow.c
	$(CC) $(LIBS) xpand.c xpandwindow.c $(OPTS) -o xpandwindow
clean:
	rm *.o xpandwindow
