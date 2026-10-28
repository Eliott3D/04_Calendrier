//
#include <iostream>
#include <cstdlib>
#include <string>
#include <array>
#include "functions.h"

int main()
{
    const unsigned MinYear = 1800;
    const unsigned MaxYear = 2100;
    const std::array<std::string, 12> MonthNames = {"Janvier", "Février", "Mars", "Avril", "Mai", "Juin", "Juillet", "Aôut", "Septembre", "Octobre", "Novembre", "Décembre"};
    bool retry = true;
    do
    {
        //ASK USER
        unsigned year;
        do
        {
            std::cout << "entrer une valeur [" << MinYear << "-" << MaxYear << "]: ";
            std::cin >> year;

            if (year < MinYear || year > MaxYear)
                std::cout << "/!\\ erreur de saisie \n";

        }while (year < MinYear || year > MaxYear);

        int monthIndex = 1;
        int dayStartIndex = get_day_of_week(year, monthIndex, 1);
        for (const std::string& month : MonthNames)
        {
            dayStartIndex = display_month(month, year, monthIndex, dayStartIndex) % 7;
            monthIndex++;
        }

        //ASK RETRY
        const char continueAns = 'O';
        const char exitAns = 'N';
        char ans;

        do
        {
            std::cout << "voulez-vous continuer [" << continueAns << "|" << exitAns << "]: ";
            std::cin >> ans;

            switch (ans)
            {
                case exitAns: retry = false; break;
            case continueAns: retry = true; break;
            }

        }while (ans != continueAns && exitAns != exitAns);

    }
    while (retry);

    return EXIT_SUCCESS;
}
