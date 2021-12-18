#include "DateFunctions.h";
#include <stdio.h>

int main() {

    Date* date1 = inputDate();

    if (isValidDate(date1)) {

        if (isLeapYear(date1)) {
            printf("%d.%d.%d is a leap year!\n", date1->day, date1->month, date1->year);
        }
        else {
            printf("%d.%d.%d isn't a leap year!\n", date1->day, date1->month, date1->year);
        }

    }
    else {
        printf("%d.%d.%d isn't a a valid gregoria date!\n", date1->day, date1->month, date1->year);
    }

    delete date1;

    return 0;
}