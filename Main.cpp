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

        printf("Days to date 1.1.0000 -> %d\n", dateToDayZero(date1));
        printf("Days to date 1.1.0000 -> %d\n", dateToDayZero(date2));

        int days;

        printf("Type a number of days that should be add / remove from %d.%d.%d: \n", date1->day, date1->month, date1->year);
        scanf_s("%d", &days);

        beforeAfterDays(date1, days);

        printf("%d.%d.%d the date before %d %s!\n", date1->day, date1->month, date1->year, days, (days != 1 ? "days" : "day"));

        dateAfterDays(date1, days);

        printf("%d.%d.%d the date after %d %s!\n", date1->day, date1->month, date1->year, days, (days != 1 ? "days" : "day"));

        printf("%s\n", getWeekDay(date1));

        if(isEarlierThan(date1, date2)){

            printf("%d.%d.%d is earlier than %d.%d.%d\n", date1->day, date1->month, date1->year, date2->day, date2->month, date2->year);

        }
        else {

            printf("%d.%d.%d isn't earlier than %d.%d.%d\n", date1->day, date1->month, date1->year, date2->day, date2->month, date2->year);

        }

    }

    delete date1;
    delete date2;

    return 0;
}