CC = g++
CFLAGS = -g -w

main: main.o util.o
	$(CC) $(CFLAGS) -o main main.o util.o
	
util.o: util.hpp util.cpp
	$(CC) $(CFLAGS) -c util.cpp
  
clean:
	rm -f core *.o main