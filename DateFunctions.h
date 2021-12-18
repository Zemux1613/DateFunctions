#pragma once
struct Date {
    int day;
    int month;
    int year;
};

bool isLeapYear(Date* date);
bool isValidDate(Date* date);
int monthLength(Date* date);
bool isEarlierThan(Date* earlier, Date* later);
Date* inputDate();
int dateToDayZero(Date* date);
int dateDifference(Date* later, Date* earlier);