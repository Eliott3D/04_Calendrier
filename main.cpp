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
    int dayStartIndex = 0;
    for (const std::string& month : MonthNames)
    {
        dayStartIndex = display_month(month, year, monthIndex, dayStartIndex) % 7;
        monthIndex++;
    }

    return EXIT_SUCCESS;
}
