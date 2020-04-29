/*
 * Author: Jasen Ratnam 40094237
 * Date: 2/2/2019
 * Due date: 11/2/2019
 * Assignment 2
 * VehicleRentalContract class
 * File that contains the specification of the class VehicleRentalContract class.
 * Initializes the functions and variables used in the class VehicleRentalContract class.
 */

#ifndef VEHICLERENTALCONTRACT_H
#define VEHICLERENTALCONTRACT_H

#include "CashPayment.h"
#include "CreditCardPayment.h"
#include "ReservationRequest.h"
#include "Car.h"
#include "Truck.h"

class VehicleRentalContract {
public:
    
    // constructors
    VehicleRentalContract(); // default
    VehicleRentalContract(ReservationRequest reservationRequest1, Car* car, Truck* truck, CashPayment* cashPayment1, CreditCardPayment* creditCardPayment1, bool pickup); // regular
    ~VehicleRentalContract(); // destructor
    
    // setters
    void setReservationRequest(ReservationRequest reservationRequest1);
    void setCar(Car* car);
    void setTruck(Truck* truck);
    void setCashPayment(CashPayment* cashPayment1);
    void setCreditCardPayment(CreditCardPayment* creditCardPayment1);
    void setPickup(bool pickup);
    
    // getters
    ReservationRequest getReservationRequest() const;
    Car* getCar() const;
    Truck* getTruck() const;
    CashPayment* getCashPayment() const;
    CreditCardPayment* getCreditCardPayment() const;
    bool getPickup() const;
    
    // print function
    void print();
    
private:
    
    // data members
    ReservationRequest reservationRequest1; // the reservation
    Car* car; // the car chosen
    Truck* truck; // the truck chosen
    CashPayment* cashPayment1; // the cash payment
    CreditCardPayment* creditCardPayment1; // the credit payment
    bool pickup; // bool to know if the car is taken

};

#endif /* VEHICLERENTALCONTRACT_H */

