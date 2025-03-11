#include <stdio.h>
#include "DateFormat.h"

int main() {
    int year, month, day;
    char type[3];
    
    printf("Date: ");
    scanf(" %d/%d/%d", &year, &month, &day);
	if (!CheckDate(year, month, day)) {
		printf("Error: Invalid date value\n");
        return 0;
    }
	
    printf("Format Type: ");
    scanf(" %s", type);
	if (!CheckRegionType(type)) {
        printf("Error: Invalid region format\n");
		return 0;
    }
	
	DateFormat(year, month, day, type);
}