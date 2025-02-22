#include <stdio.h>
#include "Swap.h"

int main()
{
   int x, y, *p;
   printf("x=?");
   scanf("%d", &x);
   printf("y=?");
   scanf("%d", &y);
   swap(&x, &y);
   printf("x=%d y=%d\n", x, y);
}
