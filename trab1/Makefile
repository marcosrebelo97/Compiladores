CC = g++
CFLAGS = -Wall -g
 
all: prog
 
prog: prog.o aloca.o
	$(CC) -o prog prog.o aloca.o
 
prog.o: prog.cpp myComp.h
	$(CC) -o prog.o prog.cpp -c -W -Wall -ansi -pedantic
 
aloca.o: aloca.cpp myComp.h
	$(CC) -o aloca.o aloca.cpp -c -W -Wall -ansi -pedantic

run:
	./prog workloadmem0 > text.txt
 
clean:
	rm -rf *.o *~ prog