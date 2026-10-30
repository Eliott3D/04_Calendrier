/// Eliott Deriaz
/// 30.10.2026s

#ifndef INC_04_CALENDRIER_FUNCTIONS_H
#include <string>

/// Checks if a year is leap
/// @param year Year to check
/// @return true if year is leap
bool is_leap_year(unsigned year);

/// Get character of specified day of week
/// @param dayOfWeek Index of day of week 0->Monday and so on
/// @return Character of day
char get_day_char(int dayOfWeek);

/// Display in console a month
/// @param month Month to display
/// @param year Year to display
/// @param monthNumber Index of Month 0 -> January
/// @param startDay Start day index
/// @return Index of last day displayed
int display_month(const std::string& month, unsigned year, short unsigned int monthNumber, short unsigned startDay);

/// Get the day index in the week of a specified date
/// @param year Year of the date to check
/// @param month Month of the date to check
/// @param day Day of the date to check
/// @return Index of the day in the week
int get_day_of_week(unsigned year, unsigned month, unsigned day);
#define INC_04_CALENDRIER_FUNCTIONS_H

#endif //INC_04_CALENDRIER_FUNCTIONS_H
