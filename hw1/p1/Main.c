#include <stdio.h>
#include "Fibonacci.h"

int main()
{
    int N;
    printf("N=? ");
    scanf("%d", &N);
    printf("F_%d=%d.\n", N, fibonacci(N) );
}
