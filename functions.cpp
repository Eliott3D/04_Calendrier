/// Eliott Deriaz
/// 30.10.2026

#include "functions.h"

#include <cstring>
#include <iomanip>
#include <iostream>
#include <string>

bool is_leap_year(unsigned year)
{
    if (year % 4 == 0)
        return true;

    if (year % 4 == 0 && year % 100 != 0)
        return true;

    return false;
}

char get_day_char(int dayOfWeek)
{
    switch (dayOfWeek)
    {
        case 0: return 'L'; break;
        case 1: return 'M'; break;
        case 2: return 'M'; break;
        case 3: return 'J'; break;
        case 4: return 'V'; break;
        case 5: return 'S'; break;
        case 6: return 'D'; break;
        default: return ' '; break;
    }
}

int display_month(const std::string& month, unsigned year, short unsigned int monthNumber, short unsigned startDay)
{
    std::cout << month << " " << year << std::endl;

    short unsigned int monthDays;

    if (monthNumber == 2)
    {
        is_leap_year(year)? monthDays = 29 : monthDays = 28;
    }
    else if (monthNumber % 2 == 1 && monthNumber <= 7 || monthNumber % 2 == 0 && monthNumber > 7)
    {
        monthDays = 31;
    }
    else monthDays = 30;

    for (int i = 0; i < 7; i++)
    {
        std::cout << std::setw(2) << get_day_char(i);
        std::cout << " ";
    }

    std::cout << std::endl;

    int day = 1;
    int lastDay;
    for (int ln = 0; day <= monthDays; ln++)
    {
        for (int col = 0; col < 7 && day <= monthDays; col++)
        {
            if (day == 1 && col != startDay)
            {
                std::cout << std::setw(2) << "";
                std::cout << " ";
                continue;
            }

            std::cout << std::setw(2) << day;
            std::cout << " ";
            day++;
            lastDay = col;
        }

        std::cout << std::endl;
    }
    return lastDay;
}

int get_day_of_week(unsigned year, unsigned month, unsigned day)
{
    year -= month < 3;
    return (year + year/4-year/100+year/400+"-bed=pen+mad."[month]+day - 1)%7;
}