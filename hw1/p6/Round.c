#include<stdio.h>
#include"Round.h"
#include<math.h>

void rounding(double *n, int p){
	double num = pow(10, p);
	*n = round(*n * num) / num;
}
