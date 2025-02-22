#include<stdio.h>
#include"Min.h"

int *min(int *a, int *b){
	return (*a>*b) ? b : a;
}
