#include "DateFunctions.h";

bool isLeapYear(Date* date) {

    return (date->year % 4 == 0) && ((date->year % 100 != 0) || (date->year % 400 == 0));

}