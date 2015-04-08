CC=gcc
OPTS=-g

all: xpand
xpand: xpand.c
	$(CC) xpand.c $(OPTS) -o xpand
clean:
	rm *.o xpand
