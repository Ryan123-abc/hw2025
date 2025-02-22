#include <stdio.h>
#include "Round.h"

int main()
{
    double x;
    int p;
    printf("Please input a floating number: ");
    scanf(" %lf", &x);
    printf("What decimal place do you want to round? ");
    scanf(" %d", &p);
    rounding(&x,p);
    printf("%f\n", x);
}
