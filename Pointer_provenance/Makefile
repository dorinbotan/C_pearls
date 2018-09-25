CC=gcc
#Change optimization flag in the next line to -O0, -O1, -O2, -O3 and do make run
CFLAGS=-std=c99 -O3
EXECUTABLE=main

all:
	@$(CC) $(CFLAGS) *.c -o $(EXECUTABLE)

run: all
	@./$(EXECUTABLE)

clean:
	rm *.o $(EXECUTALE)
