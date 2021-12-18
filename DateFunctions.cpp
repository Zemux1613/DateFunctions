#include "DateFunctions.h";

bool isLeapYear(Date* date) {

    return (date->year % 4 == 0) && ((date->year % 100 != 0) || (date->year % 400 == 0));

}

bool isValidDate(Date* date) {

    bool isValid = true;

    isValid = (date->month < 12 && date->month > 0) && (date->day > 0 && date->day <= monthLength(date));

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