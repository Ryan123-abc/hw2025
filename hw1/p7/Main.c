#include <stdio.h>
#include "Float.h"

int main()
{
   int i_part;
   double f_part;
   double d;
   printf("Please input a floating number: ");
   scanf("%lf", &d);
   decompose(d, &i_part, &f_part);
   printf("i_part=%d\n", i_part);
   printf("f_part=%f\n", f_part);
}
