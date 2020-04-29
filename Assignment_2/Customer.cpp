/*
 * Author: Jasen Ratnam 40094237
 * Date: 2/2/2019
 * Due date: 11/2/2019
 * Assignment 2
 * Customer class, inheritance from Vehicle class
 * Defines the functions
 */

#include <iostream>
#include <cstring>
#include "Date.h"
#include "Customer.h"

// default constructor
Customer::Customer() 
{
    // set customer info to default
    Date date;
    setDateOfBirth(date);
    setDrivingLicense("RATJ234");
    setName("Jasen");
}

// regular constructor
Customer::Customer(const char* name1,const char* drivingLicense1, Date dateOfBirth)
{
    // set customer info to given details
    setDateOfBirth(dateOfBirth);
    
    name = new char[ strlen( name1 ) + 1 ];
    strcpy( name, name1 );
    
    drivingLicense = new char[ strlen( drivingLicense1 ) + 1 ];
    strcpy( drivingLicense, drivingLicense1 );
}

// destructor
// deletes pointer data members
Customer::~Customer()
{
    delete name; 
    delete drivingLicense;
    cout << "Customer object deleted\n";
}

// set customer name
void Customer::setName(char* name1)
{
    name = new char[strlen(name1) + 1];
    strcpy(name, name1);
}

// set customer driving license
void Customer::setDrivingLicense(char* drivingLicense1)
{
    drivingLicense = new char[strlen(drivingLicense1) + 1];
    strcpy(drivingLicense, drivingLicense1);
}

// set customer date of birth
void Customer::setDateOfBirth(Date dateOfBirth)
{
    this->dateOfBirth = dateOfBirth;
}

// return customer name
char* Customer::getName() const
{
    return name;
}

// returns customer driving license
char* Customer::getDrivingLicense() const
{
    return drivingLicense;
}

// returns customer date of birth
Date Customer::getDateOfBirth() const
{
    return dateOfBirth;
}

// Prints customer info
void Customer::print() const
{                                               
    cout << "Customer name:                     " << name << "\n"
         << "Customer driving license:          " << drivingLicense << "\n"
         << "Customer date of birth:            ";
    dateOfBirth.printDate();
}
