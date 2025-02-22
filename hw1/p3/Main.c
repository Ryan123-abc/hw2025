#include <stdio.h>
#include "Ackerman.h"

int main()
{
    int M,N;

    do
    {
        printf("M,N=? ");
        scanf("%d,%d", &M, &N);
    } while( ((M>3)||(N>10))?printf("Wrong Input!\n"):0);
    printf("Ackerman(%d,%d)=%d.\n", M, N, Ackerman(M,N) );
}
