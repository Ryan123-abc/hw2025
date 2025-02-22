all: Main.c Ackerman.o
	cc Main.c Ackerman.o

Ackerman.o: Ackerman.c Ackerman.h
	cc -c Ackerman.c

clean:
	rm -f *.o *~ *.*~ a.out
