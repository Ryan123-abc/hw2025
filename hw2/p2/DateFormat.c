#include<stdio.h>
#include"DateFormat.h"
#include <string.h>

int CheckDate(int year, int month, int day) {
    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) daysInMonth[2] = 29;
    return (month >= 1 && month <= 12 && day >= 1 && day <= daysInMonth[month-1]);
}

int CheckRegionType(const char *type) {
    return (!strcmp(type, "US") || !strcmp(type, "UK") || !strcmp(type, "TW"));
}

void DateFormat(int year, int month, int day, const char *type) {
    const char *months[] = {"January", "February", "March", "April", "May", "June",
                            "July", "August", "September", "October", "November", "December"};
    const char *suffix = (day == 1 || day == 21 || day == 31) ? "st" :
                         (day == 2 || day == 22) ? "nd" :
                         (day == 3 || day == 23) ? "rd" : "th";

    if (!strcmp(type, "US"))
        printf("The date \"%s %d%s, %d\" is in [US] format\n", months[month-1], day, suffix, year);
    else if (!strcmp(type, "UK"))
        printf("The date \"%d%s %s, %d\" is in [UK] format\n", day, suffix, months[month-1], year);
    else
        printf("The date \"%d年%d月%d日\" is in [TW] format\n", year, month, day);
}
