#include "DateFunctions.h";
#include <stdio.h>

int main() {

    int day, month, year;
    printf("Input a day number for date1: ");
    scanf_s("%d", &day);
    printf("Input a month number for date1: ");
    scanf_s("%d", &month);
    printf("Input a year number for date1: ");
    scanf_s("%d", &year);

    Date* date = new Date();

    date->day = day;
    date->month = month;
    date->year = year;

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