/*
 * ||||||Class taken from Coen 243 aassignment |||||
 * Author: Jasen Ratnam 40094237
 */
#include <iostream>
#include "Date.h"

using namespace std;

// Constructor
Date::Date (int d, int m, int y)
{
    day = d;
    month = m;
    year = y ;
}

// sets date
void Date::setDate(int d, int m, int y)
{
    day = d;
    month = m;
    year = y ;
}

// Compares 2 dates.
// return true if the same.
// return false otherwise.
bool Date::compareDate(Date date)
{
    if(this->day == date.day)
    {
        if(this->month == date.month)
        {
            if(this->year == date.year)
            {
                return true;
            }
        }
    }
    return false;
}

int Date::getMonth()
{
    return month;
}

int Date::getDay()
{
    return day;
}

// prints date
void Date::printDate() const
{
    cout << month << "/" << day << "/" << year << "\n";
}
