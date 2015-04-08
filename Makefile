CC=gcc
OPTS=-g -std=gnu11
LIBS=-lX11 -lXcomposite -lXdamage -lcairo

all: xpandwindow eventhack
eventhack: eventhack.c
	$(CC) eventhack.c -lX11 -shared -fPIC -o eventhack.so
xpandwindow: xpand.c xpandwindow.c
	$(CC) $(LIBS) xpand.c xpandwindow.c $(OPTS) -o xpandwindow
clean:
	rm *.o xpandwindow
