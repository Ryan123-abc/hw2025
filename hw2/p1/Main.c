#include <stdio.h>
#include "GetStringLength.h"

int main() {
    char src[2048];

    printf("Enter a string: ");
    scanf("%[^\n]", src);

    printf("length: %d\n", GetStringLength(src));

    return 0;
}