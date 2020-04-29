/*
 * Author: Jasen Ratnam 40094237
 * Date: 2/2/2019
 * Due date: 11/2/2019
 * Assignment 2
 * Truck class, inheritance from Vehicle class
 * Defines the functions
 */

#include "Truck.h"
#include "Vehicle.h"
#include <iostream>

using namespace std;

// default constructor/ 
// calls Vehicle default constructor and adds the weight limit
Truck::Truck(): Vehicle() 
{
    setWeightLimit(100); // set limit to default 100 pounds
}

// regular constructor/ 
// calls Vehicle regular constructor and adds the weight limit
Truck::Truck(const char* model, Date joinedFleet, int mileage, const char* vehicle_id, bool availability[12][30], int weightLimit) : Vehicle(model, joinedFleet, mileage, vehicle_id, availability)
{
    setWeightLimit(weightLimit); // set limit to given value
}

// destructor
// No pointers to delete
Truck::~Truck() 
{
    // Nothing to do
}

// set the weight limit
void Truck::setWeightLimit(int weightLimit)
{
    this->weightLimit = weightLimit;
}
    
// returns the weight limit of truck
int Truck::getWeightLimit()
{
    return weightLimit;
}

// overrides print of Vehicle class
// Print information of the truck
void Truck::print() const
{
    Vehicle::print();                          
    cout << "Vehicle weight limit:              " << weightLimit << "\n";
}

