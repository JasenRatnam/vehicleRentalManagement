/*
 * Author: Jasen Ratnam 40094237
 * Date: 2/2/2019
 * Due date: 11/2/2019
 * Assignment 2
 * Truck class, inheritance from Vehicle class
 * File that contains the specification of the class Truck.
 * Initializes the functions and variables used in the class Truck.
 */

#ifndef TRUCK_H
#define TRUCK_H
#include "Vehicle.h"

using namespace std;

class Truck : public Vehicle{
public:
    // Constructors
    Truck(); // default
    Truck(const char* model, Date joinedFleet, int mileage, const char* vehicle_id, bool availability[12][30], int weightLimit); // regular
    ~Truck(); // destructor
    
    // setter
    void setWeightLimit(int weightLimit);
    
    //overrides print of Vehicle class
    // Print truck info
    void print() const;
    
    // getter
    int getWeightLimit();
private:
    
    // data members
    int weightLimit; // saves the weight limit of the truck

};

#endif /* TRUCK_H */

