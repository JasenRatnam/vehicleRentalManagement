/*
 * Author: Jasen Ratnam 40094237
 * Date: 2/2/2019
 * Due date: 11/2/2019
 * Assignment 2
 * Customer class
 * File that contains the specification of the class Customer.
 * Initializes the functions and variables used in the class Customer.
 */

#ifndef CUSTOMER_H
#define CUSTOMER_H

#include "Date.h"

using namespace std;

class Customer {
public:
    // Constructors
    Customer(); // default
    Customer(const char* name,const char* drivingLicense, Date dateOfBirth); // regular
    ~Customer(); // destructor
    
    // setters
    void setName(char* name); 
    void setDrivingLicense(char* drivingLicense);
    void setDateOfBirth(Date dateOfBirth);
    
    // Print function
    // Prints customer info
    void print() const;
    
    // getter
    char* getName() const;
    char* getDrivingLicense() const;
    Date getDateOfBirth() const;
    
private:
    // data members
    char* name; // customer name
    char* drivingLicense; // customer driving license
    Date dateOfBirth; // customer date of birth
};

#endif /* CUSTOMER_H */

