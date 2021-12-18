#include "DateFunctions.h";
#include <stdio.h>

int main() {

    Date* date = new Date();

    date->day = 28;
    date->month = 2;
    date->year = 4567;

    if (isValidDate(date)) {

        if (isLeapYear(date)) {
            printf("%d.%d.%d is a leap year!\n", date->day, date->month, date->year);
        }
        else {
            printf("%d.%d.%d isn't a leap year!\n", date->day, date->month, date->year);
        }

    }
    else {
        printf("%d.%d.%d isn't a a valid gregoria date!\n", date->day, date->month, date->year);
    }

    delete date;

    return 0;
}