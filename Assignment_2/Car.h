/*
 * Author: Jasen Ratnam 40094237
 * Date: 2/2/2019
 * Due date: 11/2/2019
 * Assignment 2
 * Car class, inheritance from Vehicle class
 * File that contains the specification of the class Car.
 * Initializes the functions and variables used in the class Car.
 */

#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"

class Car : public Vehicle{
public:
    // Constructors:
    Car(); // default
    Car(const char* model, Date joinedFleet, int mileage, const char* vehicle_id, bool availability[12][30], int passengerCapacity); // regular
    ~Car(); // destructor
    
    // setter
    void setPassengerCapacity(int passengerCapacity); // set the passenger capacity
    
    // print function
    void print() const; //overrides print of Vehicle class
    
    // getter
    int getPassengerCapacity() const; // returns the capacity
    
private:
    
    // data members
    int passengerCapacity; // maximum passengers possible in a car.

};

#endif /* CAR_H */

