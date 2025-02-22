all: Main.c Round.o
	cc Main.c Round.o -lm

Round.o: Round.c Round.h
	cc -c Round.c

clean:
	rm -f *.o *~ *.*~ a.out
