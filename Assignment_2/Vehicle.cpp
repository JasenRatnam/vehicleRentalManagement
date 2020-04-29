/*
 * Author: Jasen Ratnam 40094237
 * Date: 2/2/2019
 * Due date: 11/2/2019
 * Vehicle class
 * Defines the functions.
 */

#include <iostream>
#include <cstring>
#include "Date.h"
#include "Vehicle.h"

using namespace std;

// Default constructor
Vehicle::Vehicle() 
{
    Date date;
    bool availability[12][30];
    
    // Set data members to default members
    setAvailability(availability);
    setJoinedFleetDate(date);
    setMileage(10000);
    setModel("Honda");
    setVehicleId("2345");
}

// Regular constructor
Vehicle::Vehicle(const char* model1, Date joinedFleet, int mileage, const char* vehicle_id1, bool availability[12][30]) 
{
    // Set data members given
    setAvailability(availability);
    setJoinedFleetDate(joinedFleet);
    setMileage(mileage);
    
    model = new char[strlen(model1) + 1];
    strcpy(model, model1);
    
    vehicle_id = new char[strlen(vehicle_id1) + 1];
    strcpy(vehicle_id, vehicle_id1);
}

// destructor
Vehicle::~Vehicle() 
{
    // delete pointers data members
    delete model;
    delete vehicle_id;
    cout << "Vehicle object deleted\n";
}
    
// set the vehicle model name
void Vehicle::setModel(char* model1)
{
    model = new char[strlen(model1) + 1];
    strcpy(model, model1);
}

// set the date the vehicle joined fleet.
void Vehicle::setJoinedFleetDate(Date joinedDate)
{
    this->joinedFleet = joinedDate;
}

// set vehicle mileage
void Vehicle::setMileage(int mileage)
{
    this->mileage = mileage;
}

// set vehicle Id
void Vehicle::setVehicleId(char* vehicleId1)
{
    vehicle_id = new char[strlen(vehicleId1) + 1];
    strcpy(vehicle_id, vehicleId1);
}

// set a new availability calender
void Vehicle::setAvailability(bool availability1[12][30])
{
    for(int index1 = 0; index1 < 12; index1++)
    {
        for(int index2 = 0; index2 < 30; index2++)
        {
            availability[index1][index2] = availability1[index1][index2];
        }
    }
}
    
// returns the model of the vehicle    
char* Vehicle::getModel() const
{
    return model;
}

// returns the date the vehicle joined the fleet
Date Vehicle::getJoinedFleetDate() const
{
    return joinedFleet;
}

// returns the vehicle mileage
int Vehicle::getMileage() const
{
    return mileage;
}

// returns the vehicle id
char* Vehicle::getVehicleId() const
{
    return vehicle_id;
}

// returns the availability calender
bool Vehicle::getAvailability() const
{
    return availability;
}

// Change the availability on a specific day of a month
void Vehicle::changeAvailability(int month1, int day1, bool availability) const
{
    for(int month = 0; month <= 12; month++)
    {
        for(int day = 0; day <= 30; month++)
        {
            if(month1 == month || day1 == day )
            {
                availability = true;
            }
        }
    }
}

// Prints information about the vehicle.
void Vehicle::print() const
{
    cout << "Vehicle model:                     " << model << "\n"
         << "Date vehicle has joined the fleet: ";
         joinedFleet.printDate();
    cout << "Vehicle mileage:                   " << mileage << "\n"
         << "Vehicle four digit id:             " << vehicle_id << "\n";
}