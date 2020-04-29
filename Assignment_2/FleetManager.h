/*
 * Author: Jasen Ratnam 40094237
 * Date: 2/2/2019
 * Due date: 11/2/2019
 * Assignment 2
 * FleetManager class
 * File that contains the specification of the class FleetManager class.
 * Initializes the functions and variables used in the class FleetManager class.
 */

#ifndef FLEETMANAGER_H
#define FLEETMANAGER_H

#include <vector>

#include "Car.h"
#include "Truck.h"
#include "Customer.h"
#include "VehicleRentalContract.h"
#include "ReservationRequest.h"


class FleetManager {
public:
    
    // Constructors
    FleetManager(); // default
    FleetManager(int carfleet_size, int truckfleet_size, vector<Car> cars, vector<Truck> trucks, vector<Customer> customers, vector<VehicleRentalContract> carRentalContracts); // regular
    ~FleetManager(); // destructor
    
    // setters
    void setCarFleetSize(int carfleet_size);
    void setTruckFleetSize(int truckfleet_size);
    void setCars(vector<Car> cars);
    void setTrucks(vector<Truck> trucks);
    void setCustomers(vector<Customer> customers);
    void setCarRentalContracts(vector<VehicleRentalContract> carRentalContracts);
    
    // getters
    int getCarfleetSize();
    int getTruckFleetSize();
    vector<Car> getCars();
    vector<Truck> getTrucks();
    vector<Customer> getCustomers();
    vector<VehicleRentalContract> getCarRentalContracts();
    
    // process a reservation
    int processeReservation(ReservationRequest reservationRequest1);
    
    // print the info of a car rental
    void carRentalContractInfo(int requestNumber);
    
    // cancel a reservation
    void cancelReservation(int requestNumber, Date currentDate);
    
    // reset the mileage of a car after the return
    void setNewMileage(int requestNumber, int mileage);
    
    // print the information of the fleet
    void print();
    
    
private:

    // data members
    int carfleet_size; // The number of cars
    int truckfleet_size; // the number of trucks
    vector<Car> cars; // all cars
    vector<Truck> trucks; // all trucks
    vector<Customer> customers; // all customers
    vector<VehicleRentalContract> carRentalContracts; // all contracts
};

#endif /* FLEETMANAGER_H */

