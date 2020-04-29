/*
 * Author: Jasen Ratnam 40094237
 * Date: 2/2/2019
 * Due date: 11/2/2019
 * Assignment 2
 * Vehicle class
 * File that contains the specification of the class Vehicle.
 * Initializes the functions and variables used in the class Vehicle.
 */

#ifndef VEHICLE_H
#define VEHICLE_H

#include "Date.h"

using namespace std;

class Vehicle {
public:
    
    // Constructors
    Vehicle(); //Default
    // regular constructor
    Vehicle(const char* model, Date joinedFleet, int mileage, const char* vehicle_id, bool availability[12][30]);
    ~Vehicle(); //Destructor
    
    // Setters:
    void setModel(char* model); 
    void setJoinedFleetDate(Date joinedDate);
    void setMileage(int mileage);
    void setVehicleId(char* vehicleId);
    void setAvailability(bool availability[12][30]);
    
    // Print function:
    void print() const;
    
    // Getters
    char* getModel() const;
    Date getJoinedFleetDate() const;
    int getMileage() const;
    char* getVehicleId() const;
    bool getAvailability() const;
    
    // Function to change availability on a day
    void changeAvailability(int month1, int day1, bool availability) const;
    
private:
    
    // Data members:
    char* model;               // Vehicle model
    Date joinedFleet;          // Date vehicle joined the fleet
    int mileage;               // Vehicle mileage
    char* vehicle_id;          // id number of vehicle
    bool availability[12][30]; // Each row is a month with 30 days.
   
};

#endif /* VEHICLE_H */

