/*
 * Author: Jasen Ratnam 40094237
 * Date: 2/2/2019
 * Due date: 11/2/2019
 * Assignment 2
 * ReservationRequest class
 * File that contains the specification of the class ReservationRequest.
 * Initializes the functions and variables used in the class ReservationRequest.
 */


#ifndef RESERVATIONREQUEST_H
#define RESERVATIONREQUEST_H
#include "Customer.h"

class ReservationRequest {
public:
    
    // constructors
    ReservationRequest(); // default
    ReservationRequest(Customer customer, const char* vehicle_type, Date reservationDate, Date rentalStart, Date rentalEnd, int vehicleInfo); //regular
    ~ReservationRequest(); // destructor
    
    // setters
    void setCustomer(Customer customer);
    void setVehicle(char* vehicle_type);
    void setRequestNumber(int requestNumber);
    void setReservationDate(Date reservationDate);
    void setRentalStartDate(Date rentalStart);
    void setRentalStartEnd(Date rentalEnd);
    void setVehicleInfo(int vehicleInfo);
    
    // print function, prints reservation request info
    void print() const;
    
    // getters
    Customer getCustomer() const;
    char* getVehicle() const;
    int getRequestNumber() const;
    Date getReservationDate() const;
    Date getRentalStartDate() const;
    Date getRentalStartEnd() const;
    int getVehicleInfo() const;
    
private:
    
    // data members
    Customer customer; // customer making reservation
    char* vehicle_type; // type of vehicle reserved
    int requestNumber = 0; // reservation request number
    Date reservationDate; // date of the reservation
    Date rentalStart; // date of pickup
    Date rentalEnd; // date of dropoff
    int vehicleInfo; // vehicle passenger capacity or weight limit depending on vehicle type
};

#endif /* RESERVATIONREQUEST_H */

