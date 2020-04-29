/*
 * Author: Jasen Ratnam 40094237
 * Date: 2/2/2019
 * Due date: 11/2/2019
 * Assignment 2
 * ReservationRequest class
 * Defines the functions
 */

#include "ReservationRequest.h"
#include "Customer.h"
#include <cstring>
#include <iostream>

using namespace std;

// default constructor
ReservationRequest::ReservationRequest()
{
    Customer customer1;
    Date reservationDate1;
    Date rentalStart1;
    Date rentalEnd1;
    
    // set default values of reservation
    requestNumber++; // increment request number;
    setCustomer(customer1);
    setVehicle("Car");
    setReservationDate(reservationDate1);
    setRentalStartDate(rentalStart1);
    setRentalStartEnd(rentalEnd1);
    setVehicleInfo(5);
}

// regular constructor
ReservationRequest::ReservationRequest(Customer customer, const char* vehicle_type1, Date reservationDate, Date rentalStart, Date rentalEnd, int vehicleInfo)
{
    // set given values to reservation info
    requestNumber++; // increment request number
    setCustomer(customer);
    setReservationDate(reservationDate);
    setRentalStartDate(rentalStart);
    setRentalStartEnd(rentalEnd);
    setVehicleInfo(vehicleInfo);
    
    vehicle_type = new char[ strlen( vehicle_type1 ) + 1 ];
    strcpy( vehicle_type, vehicle_type1 );
    
    
}

// destructor
// deletes pointer objects,
ReservationRequest::~ReservationRequest() 
{
    delete vehicle_type;
    cout << "Reservation request object deleted\n";
}

// set the customer
void ReservationRequest::setCustomer(Customer customer)
{
    this->customer = customer;
}

// set the vehicle type
void ReservationRequest::setVehicle(char* vehicle_type1)
{
    vehicle_type = new char[ strlen( vehicle_type1 ) + 1 ];
    strcpy( vehicle_type, vehicle_type1 );
}

// set the request number
void ReservationRequest::setRequestNumber(int requestNumber)
{
    this->requestNumber = requestNumber;
}

// set the reservation date
void ReservationRequest::setReservationDate(Date reservationDate)
{
    this->reservationDate = reservationDate;
}

// set the rental start date
void ReservationRequest::setRentalStartDate(Date rentalStart)
{
    this->rentalStart = rentalStart;
}

// set the rental end date
void ReservationRequest::setRentalStartEnd(Date rentalEnd)
{
    this->rentalEnd = rentalEnd;
}

// set the passenger capacity
// or the weight limit of the vehicle type
void ReservationRequest::setVehicleInfo(int vehicleInfo)
{
    this->vehicleInfo = vehicleInfo;
}

// returns customer
Customer ReservationRequest::getCustomer() const
{
    return customer;
}

// returns the vehicle type
char* ReservationRequest::getVehicle() const
{
    return vehicle_type;
}

// returns the request number of the reservation
int ReservationRequest::getRequestNumber() const
{
    return requestNumber;
}

// returns the reservation date
Date ReservationRequest::getReservationDate() const
{
    return reservationDate;
}

// return rental start date
Date ReservationRequest::getRentalStartDate() const
{
    return rentalStart;
}

// return rental end date
Date ReservationRequest::getRentalStartEnd() const
{
    return rentalEnd;
}

// return vehicle info
int ReservationRequest::getVehicleInfo() const
{
    return vehicleInfo;
}

// print reservation request
void ReservationRequest::print() const
{                                   
    cout << "Customer Information:              " << "\n";
    customer.print();
    cout << "Vehicle type reserved:             " << vehicle_type << "\n"
         << "Reservation request number:        " << requestNumber << "\n"
         << "Reservation date:                  ";
         reservationDate.printDate();
    cout << "Starting date of the rental:       ";
            rentalStart.printDate();
    cout << "End date of the rental:            ";
            rentalEnd.printDate();
    cout << "Vehicle information:               " << vehicleInfo << "\n";
}
