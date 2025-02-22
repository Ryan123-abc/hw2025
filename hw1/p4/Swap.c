#include<stdio.h>
#include"Swap.h"

int swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b =temp;
}
