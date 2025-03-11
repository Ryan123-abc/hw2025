all: Main.c CheckID.o
	gcc Main.c CheckID.o
checkID.o: CheckID.c CheckID.h
	gcc -c CheckID.c
clean:
	rm -f *.o *~ *.*~ a.out
