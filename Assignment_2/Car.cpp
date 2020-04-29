/*
 * Author: Jasen Ratnam 40094237
 * Date: 2/2/2019
 * Due date: 11/2/2019
 * Assignment 2
 * Car class, inheritance from Vehicle class
 * Defines the functions
 */

#include <iostream>
#include "Car.h"
#include "Vehicle.h"
#include "Date.h"

// default constructor/ 
// calls Vehicle default constructor and adds the passenger capacity
Car::Car(): Vehicle() 
{
    setPassengerCapacity(5); // set capacity to 5
}

// regular constructor/ 
// calls Vehicle regular constructor and adds the passenger capacity
Car::Car(const char* model, Date joinedFleet, int mileage, const char* vehicle_id, bool availability[12][30], int passengerCapacity):Vehicle(model, joinedFleet, mileage, vehicle_id, availability)
{
    setPassengerCapacity(passengerCapacity); // set capacity to given value
}

// destructor
// No pointers to delete
Car::~Car() 
{
    // does nothing
    
}
 
// set the passenger capacity
void Car::setPassengerCapacity(int passengerCapacity)
{
    this->passengerCapacity = passengerCapacity;
}

// returns the passenger capacity
int Car::getPassengerCapacity() const
{
    return passengerCapacity;
}

// overrides print of Vehicle class
// Print information of the car
void Car::print() const
{
    Vehicle::print();                           
    cout << "Vehicle passenger capacity:        " << passengerCapacity << "\n";
}
