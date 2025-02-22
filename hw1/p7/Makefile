all: Main.c Float.o
	cc Main.c Float.o

Float.o: Float.c Float.h
	cc -c Float.c

clean:
	rm -f *.o *~ *.*~ a.out
