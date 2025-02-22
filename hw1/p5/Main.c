#include <stdio.h>
#include "Min.h"

int main()
{
   int x, y, *p;
   printf("Please input two numbers: ");
   scanf("%d %d", &x, &y);
   p = min(&x, &y);
   printf("The minimum of %d and %d is %d.\n", x, y, *p);
}
