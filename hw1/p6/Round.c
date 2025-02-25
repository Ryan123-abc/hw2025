#include<stdio.h>
#include"Round.h"

void rounding(double *n, int p){
	double factor = 1;
    for (int i = 0; i < p; i++) {
        factor *= 10;
    }
    *n = (int)((*n * factor) + 0.5) / factor;
}
