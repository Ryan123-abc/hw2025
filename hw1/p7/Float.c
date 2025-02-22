#include<stdio.h>
#include"Float.h"

void decompose(double d, int *i, double *f){
	*i = (int)d;
	*f = d - *i;
}
