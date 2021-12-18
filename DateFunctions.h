#pragma once
struct Date {
    int day;
    int month;
    int year;
};

bool isLeapYear(Date* date);
bool isValidDate(Date* date);
int monthLength(Date* date);