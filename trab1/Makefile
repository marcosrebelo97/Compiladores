CC = gcc
CFLAGS = -c -W -Wall -ansi -pedantic
 
all: prog
 
prog: main.o parser.o analex.o
	$(CC) -o prog main.o parser.o analex.o

main.o: main.c parser.c analex.c
	$(CC) -o main.o main.c $(CFLAGS)

parser.o: parser.c myComp.h
	$(CC) -o parser.o parser.c $(CFLAGS)

analex.o: analex.c myComp.h
	$(CC) -o analex.o analex.c $(CFLAGS)

run:
	./prog teste.c

clear:
	rm -rf *.o *~ prog
