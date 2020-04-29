/*
 * Author: Jasen Ratnam 40094237
 * Date: 2/2/2019
 * Due date: 11/2/2019
 * Assignment 2
 * VehicleRentalContract class
 * Defines the functions
 */

#include "VehicleRentalContract.h"
#include "Truck.h"
#include "Car.h"
#include "ReservationRequest.h"
#include <iostream>

// default constructor
VehicleRentalContract::VehicleRentalContract()
{
    //  set default values to data members
    Car* car1;
    Truck* truck1;
    CashPayment* cashPayment2;
    CreditCardPayment* creditCardPayment2;
    ReservationRequest reservationRequest2;
    
    this->car = car1;
    this->cashPayment1 = cashPayment2;
    this->creditCardPayment1 = creditCardPayment2;
    setPickup(true);
    setReservationRequest(reservationRequest2);
    this->truck = truck1;
}

// regular constructor
VehicleRentalContract::VehicleRentalContract(ReservationRequest reservationRequest1, Car* car, Truck* truck, CashPayment* cashPayment1, CreditCardPayment* creditCardPayment1, bool pickup) 
{
    // set given details to contract
    setCar(car);
    setCashPayment(cashPayment1);
    setCreditCardPayment(creditCardPayment1);
    setPickup(pickup);
    setReservationRequest(reservationRequest1);
    setTruck(truck);
}

// destructor
VehicleRentalContract::~VehicleRentalContract()
{
    // delete all pointers in class
    delete car;
    delete truck;
    delete cashPayment1;
    delete creditCardPayment1;
    cout << "Vehicle rental contract object deleted\n";
}

// set the reservation
void VehicleRentalContract::setReservationRequest(ReservationRequest reservationRequest1)
{
    this->reservationRequest1 = reservationRequest1;
}

// set the car
void VehicleRentalContract::setCar(Car* car)
{
    this->car = car;
}

// set the truck
void VehicleRentalContract::setTruck(Truck* truck)
{
    this->truck = truck;
}

// set the cash payment
void VehicleRentalContract::setCashPayment(CashPayment* cashPayment1)
{
    this->cashPayment1 = cashPayment1;
}

// set the credit card payment
void VehicleRentalContract::setCreditCardPayment(CreditCardPayment* creditCardPayment1)
{
    this->creditCardPayment1 = creditCardPayment1;
}

// set the pickup boolean
void VehicleRentalContract::setPickup(bool pickup)
{
    this->pickup = pickup;
}

// return the reservation
ReservationRequest VehicleRentalContract::getReservationRequest() const
{
    return reservationRequest1;
}

// return the car
Car* VehicleRentalContract::getCar() const
{
    return car;
}

// return the truck
Truck* VehicleRentalContract::getTruck() const
{
    return truck;
}

// return the cash payment
CashPayment* VehicleRentalContract::getCashPayment() const
{
    return cashPayment1;
}

// return the credit card payment
CreditCardPayment* VehicleRentalContract::getCreditCardPayment() const
{
    return creditCardPayment1;
}

// return the pickup boolean
bool VehicleRentalContract::getPickup() const
{
    return pickup;
}

// Print the contract information
void VehicleRentalContract::print()
{
    cout << "Reservation request Information:   " << "\n";
    reservationRequest1.print();
    
    cout << "Car Information:                   " << "\n";
    car->print();
    
    cout << "Truck Information:                 " << "\n";
    truck->print();
    
    cout << "Payment Information:               " << "\n";
    cashPayment1->paymentDetails();
    creditCardPayment1->paymentDetails();
    
    cout << "Vehicle is ";
    
    if(pickup)
    {
        cout << "picked up.\n";
    }
    
    else
    {
        cout << "returned.\n";
    }
       
}


