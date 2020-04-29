/*
 * ||||||Class taken from Coen 243 aassignment |||||
 * Author: Jasen Ratnam 40094237
 * File that contains the specification of the class Date.
 * Initializes the functions and variables used in the class DAte.
 */
#ifndef DATE_H
#define DATE_H

using namespace std;

class Date 
{
    // initialize functions in date class.
    public:
       Date(int=1, int=1, int=2000);    // sets day, month, year
       void setDate(int, int, int);     // sets the date
       void printDate() const;          // prints date to the screen
       
       bool compareDate(Date date);     // Compares 2 date

       int getMonth();
       int getDay();
    // Initialize variable in course class. 
    private:
       int day;
       int month;
       int year;
};
#endif /* DATE_H_ */


