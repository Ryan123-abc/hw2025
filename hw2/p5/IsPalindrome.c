#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "IsPalindrome.h"

void cleanString(char *str, char *cleanedStr) {
    int j = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z' || str[i] >= 'a' && str[i] <= 'z') {  
            cleanedStr[j++] = tolower((unsigned char)str[i]);  
        }
    }
    cleanedStr[j] = '\0';  
}

int IsPalindrome(char *str) {
    char cleanedStr[257];  
    cleanString(str, cleanedStr);  
    
    int len = strlen(cleanedStr);  
    for (int i = 0; i < len / 2; i++) {
        if (cleanedStr[i] != cleanedStr[len - 1 - i]) {
            return 0;  
        }
    }
    return 1;
}
      
