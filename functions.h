//
// Created by lesco on 28.10.2026.
//

#ifndef INC_04_CALENDRIER_FUNCTIONS_H
#include <string>

bool is_leap_year(int year);
char get_day_char(int dayOfWeek);
int display_month(const std::string& month, unsigned year, short unsigned int monthNumber, short unsigned startDay);
int get_day_of_week(unsigned year, unsigned month, unsigned day);
#define INC_04_CALENDRIER_FUNCTIONS_H

#endif //INC_04_CALENDRIER_FUNCTIONS_H
