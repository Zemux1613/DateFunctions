#include "DateFunctions.h";
#include <stdio.h>

int main() {

    Date* date = new Date();

    date->day = 12;
    date->month = 3;
    date->year = 4567;

    if (isLeapYear(date)) {
        printf("%d.%d.%d is a leap year!\n", date->day, date->month, date->year);
    }
    else {
        printf("%d.%d.%d isn't a leap year!\n", date->day, date->month, date->year);
    }

    delete date;

    return 0;
}