#include "DateFunctions.h";
#include <stdio.h>

bool isLeapYear(Date* date) {

    return (date->year % 4 == 0) && ((date->year % 100 != 0) || (date->year % 400 == 0));

}

bool isValidDate(Date* date) {

    bool isValid = true;

    isValid = (date->month <= 12 && date->month > 0) && (date->day > 0 && date->day <= monthLength(date));

    return isValid;

}

int monthLength(Date* date) {

    int days = 0;

    switch (date->month) {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:

        days = 31;
        break;

    case 4: case 6: case 9: case 11:
        
        days = 30;
        break;

    case 2: 
        days = 28;
        if (isLeapYear(date)) {
            days++;
        }
        break;
    }

    return days;

}

bool isEarlierThan(Date* earlier, Date* later) {

    bool ret = false;

    if (earlier->year < later->year) {
    
        ret = true;
    
    } 

    else {

        if (earlier->month == later->month) {
        
            if (earlier->day < later->day) {
            
                ret = true;
            
            }
        
        }

        else if(earlier->month < later->month) {
        
            ret = true;
    
        }

    }

    return ret;
}

Date* inputDate() {
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

    return date;
}

int dateToDayZero(Date* date) {

    int year = date->year;

    int days = (year - 1) * 365 + ((year - 1) / 4 - (year - 1) / 100) + (year - 1) / 400;

    for (int i = 1; i < date->month - 1; i++) {

        days += monthLength(date);

    }

    return days;

}

int dateDifference(Date* later, Date* earlier) {

    int dayLater = dateToDayZero(later);
    int dayEarlier = dateToDayZero(earlier);

    return dayLater - dayEarlier;

}