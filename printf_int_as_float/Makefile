CC=gcc
CFLAGS=-std=c99 -Wall -Wextra -pedantic
FILES=*.c
EXECUTABLE=main

all:
	@$(CC) $(CFLAGS) $(FILES) -o $(EXECUTABLE)

run: all
	@./$(EXECUTABLE)

clean:
	@rm *.o $(EXECUTALE)
