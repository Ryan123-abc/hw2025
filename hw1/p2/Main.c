#include <stdio.h>
#include "GCD.h"

int main()
{
    int a, b;
    printf("請輸入兩個整數(a,b)=? ");
    scanf("%d,%d", &a, &b);
    printf("%d與%d的最大公因數為%d\n", a, b, GCD(a,b) );

}
