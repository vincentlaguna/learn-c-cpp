CC = gcc
CFLAGS = -g -w -Wall

main: main.o util.o
	$(CC) $(CFLAGS) -o main main.o util.o
	
util.o: util.h util.c
	$(CC) $(CFLAGS) -c util.c
	
clean:
	rm -f core *.o main