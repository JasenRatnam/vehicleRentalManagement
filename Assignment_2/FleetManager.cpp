/*
 * Author: Jasen Ratnam 40094237
 * Date: 2/2/2019
 * Due date: 11/2/2019
 * Assignment 2
 * FleetManager class
 * File that contains the specification of the class FleetManager class.
 * Initializes the functions and variables used in the class FleetManager class.
 */

#include <iostream>
#include "FleetManager.h"
#include "VehicleRentalContract.h"

// default constructor
FleetManager::FleetManager()
{
    vector<Car> car;
    vector<Truck> truck;
    vector<Customer> customer;
    vector<VehicleRentalContract> contract;
    
    // set default value to data members
    setCarFleetSize(0);
    setTruckFleetSize(0);
    setCars(car);
    setTrucks(truck);
    setCustomers(customer);
    setCarRentalContracts(contract);
}

// regular constructor
FleetManager::FleetManager(int carfleet_size, int truckfleet_size, vector<Car> cars, vector<Truck> trucks, vector<Customer> customers, vector<VehicleRentalContract> carRentalContracts)
{
    // set given details to fleet
    setCarFleetSize(carfleet_size);
    setTruckFleetSize(truckfleet_size);
    setCars(cars);
    setTrucks(trucks);
    setCustomers(customers);
    setCarRentalContracts(carRentalContracts);
}

// destructor
// no pointers to delete
FleetManager::~FleetManager()
{
    // Nothing to do.
}

// set the amount of cars
void FleetManager::setCarFleetSize(int carfleet_size)
{
    this->carfleet_size = carfleet_size;
}

// set the mount of trucks
void FleetManager::setTruckFleetSize(int truckfleet_size)
{
    this->truckfleet_size = truckfleet_size;
}

// set all cars
void FleetManager::setCars(vector<Car> cars)
{
    this->cars = cars;
}

// set all truck
void FleetManager::setTrucks(vector<Truck> trucks)
{
    this->trucks = trucks;
}

// set customers
void FleetManager::setCustomers(vector<Customer> customers)
{
    this->customers = customers;
}

// set contracts
void FleetManager::setCarRentalContracts(vector<VehicleRentalContract> carRentalContracts)
{
    this->carRentalContracts = carRentalContracts;
}

// return amount car
int FleetManager::getCarfleetSize()
{
    return carfleet_size;
}

// return amount truck
int FleetManager::getTruckFleetSize()
{
    return truckfleet_size;
}

// return all cars
vector<Car> FleetManager::getCars()
{
    return cars;
}

// return all trucks
vector<Truck> FleetManager::getTrucks()
{
    return trucks;
}

// return all customers
vector<Customer> FleetManager::getCustomers()
{
    return customers;
}

// return all contracts
vector<VehicleRentalContract> FleetManager::getCarRentalContracts()
{
    return carRentalContracts;
}

// processe a reservation
int FleetManager::processeReservation(ReservationRequest reservationRequest1)
{
    int capacity = reservationRequest1.getVehicleInfo();
    
    for(Car car : cars)
    {
        if(car.getPassengerCapacity() >= capacity)
        {
            
            VehicleRentalContract vehicleRentalContract;
            vehicleRentalContract.setReservationRequest(reservationRequest1);
            vehicleRentalContract.setCar(&car);
            vehicleRentalContract.setPickup(true);
            
            carRentalContracts.push_back(vehicleRentalContract);
            break;
        }
    }
    
    return reservationRequest1.getRequestNumber();
}

// print a specific contract
void FleetManager::carRentalContractInfo(int requestNumber)
{
    for(VehicleRentalContract rentalContract : carRentalContracts)
    {
        if(rentalContract.getReservationRequest().getRequestNumber() == requestNumber)
        {
            rentalContract.print();
            break;
        }
    }
}

// cancel a reservation
void FleetManager::cancelReservation(int requestNumber, Date currentDate)
{
    for(VehicleRentalContract rentalContract: carRentalContracts)
    {
        if(rentalContract.getReservationRequest().getRequestNumber() == requestNumber)
        {
            int month = currentDate.getMonth();
            int day = currentDate.getDay();
            bool availability[12][30];
            rentalContract.getCar()->changeAvailability(month, day, true);
            
            rentalContract.getReservationRequest().~ReservationRequest();
            rentalContract.~VehicleRentalContract();
            break;
        }
    }
}

// set the new mileage of a car after a return
void FleetManager::setNewMileage(int requestNumber, int mileage)
{
    for(VehicleRentalContract rentalContract: carRentalContracts)
    {
        if(rentalContract.getReservationRequest().getRequestNumber() == requestNumber)
        {
            rentalContract.getCar()->setMileage(mileage);
            break;
        }
    }
}

// print info of the fleet
void FleetManager::print()
{
    cout << "Car fleet size:                    " << carfleet_size << "\n";
    
    cout << "Truck fleet size:                  " << truckfleet_size << "\n";
    
    cout << "Car fleet information:             " << "\n";
    
    for(Car car: cars)
    {
        car.print();
    }
    
    cout << "Truck fleet information:           " << "\n";
    
    for(Truck truck: trucks)
    {
        truck.print();
    }
    
    cout << "Customer information:              " << "\n";
    
    for(Customer customer: customers)
    {
        customer.print();
    }
    
    cout << "Rental contracts information:      " << "\n";
    
    for(VehicleRentalContract contract: carRentalContracts)
    {
        contract.print();
    }
}