#include<stdio.h>
#include"Swap.h"

void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b =temp;
}
