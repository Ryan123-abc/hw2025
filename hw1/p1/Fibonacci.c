#include<stdio.h>
#include"Fibonacci.h"

int fibonacci(int n){
	if((n==0)||(n==1))
		return n;
	else{
		return fibonacci(n-2)+fibonacci(n-1);
	}
}
