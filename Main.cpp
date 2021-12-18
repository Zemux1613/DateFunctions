#include "DateFunctions.h";
#include <stdio.h>

int main() {

    Date* date1 = inputDate();
    Date* date2 = inputDate();

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

    if (isValidDate(date1) && isValidDate(date2)) {

        if(isEarlierThan(date1, date2)){

            printf("%d.%d.%d is earlier than %d.%d.%d", date1->day, date1->month, date1->year, date2->day, date2->month, date2->year);

        }
        else {

            printf("%d.%d.%d isn't earlier than %d.%d.%d", date1->day, date1->month, date1->year, date2->day, date2->month, date2->year);

        }

    }

    delete date1;
    delete date2;

    return 0;
}