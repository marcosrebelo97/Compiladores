CC = gcc
CFLAGS = -c -W -Wall -ansi -pedantic
 
all: prog
 
prog: main.o parser.o
	$(CC) -o prog main.o parser.o

main.o: main.c parser.c
	$(CC) -o main.o main.c $(CFLAGS)

parser.o: parser.c myComp.h
	$(CC) -o parser.o parser.c $(CFLAGS)

run:
	./prog main.c

clear:
	rm -rf *.o *~ prog
