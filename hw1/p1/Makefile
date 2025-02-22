all: Main.c Fibonacci.o
	cc Main.c Fibonacci.o

Fibonacci.o: Fibonacci.c Fibonacci.h
	cc -c Fibonacci.c

clean:
	rm -f *.o *~ *.*~ a.out
