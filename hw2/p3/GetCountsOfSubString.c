#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "GetCountsOfSubString.h"

void to_lower_case(char *str) {
    for (int i = 0; str[i]; i++) {
        str[i] = tolower((unsigned char)str[i]);
    }
}

int GetCountsOfSubString(const char *haystack, const char *needle) {
    int count = 0;
    char haystack_copy[4097], needle_copy[129];

    strcpy(haystack_copy, haystack);
    strcpy(needle_copy, needle);

    to_lower_case(haystack_copy);
    to_lower_case(needle_copy);

    char *pos = strstr(haystack_copy, needle_copy);
    while (pos != NULL) {
        count++;
        pos = strstr(pos + 1, needle_copy);
    }

    return count;
}

