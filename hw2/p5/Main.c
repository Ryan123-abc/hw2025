#include <stdio.h>
#include "IsPalindrome.h"

int main() {
    char str[257];
    for (int i = 0; i < 257; i++) {
    	str[i] = 0;
    }

    printf("Enter a string: ");
    scanf("%256[^\n]", str);

    if (IsPalindrome(str)) {
        printf("\"%s\" is a palindrome.\n", str);
    } else {
        printf("\"%s\" is not a palindrome.\n", str);
    }

    return 0;
}
