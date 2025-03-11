all: Main.c DateFormat.o
	gcc Main.c DateFormat.o
	
DateFormat.o: DateFormat.c
	gcc -c DateFormat.c

clean:
	rm -f *.o *.out *.*~ *~