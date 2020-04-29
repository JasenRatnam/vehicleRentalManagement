/*
 * Author: Jasen Ratnam 40094237
 * Date: 2/2/2019
 * Due date: 11/2/2019
 * Assignment 2
 * main function
 * creates customer objects & reservation request objects
 * calls to the FleetManager member functions to process all rental tasks
 * Not sure what to do instructions are not clear 
 * If it does not run, clean & build before running.
 * Runs sometimes and sometimes it doesn't
 */

#include <cstdlib>
#include <iostream>
#include "Customer.h"
#include "ReservationRequest.h"
#include "Car.h"
#include "Date.h"
#include "VehicleRentalContract.h"
#include "FleetManager.h"
#include <vector>

using namespace std;

int main() 
{
    Date dateOfBirth1(17,6,1999);
    Date dateOfBirth2(4,4,1996);
    Date dateOfBirth3(10,12,1973);
    Date dateOfBirth4(14,11,1962);
    Date dateOfBirth5(28,2,1995);
    
    Customer customer1("Jasen", "JAS 1242", dateOfBirth1);
    Customer customer2("Alex", "ALE 6352", dateOfBirth2);
    Customer customer3("Ali", "ALI 2635", dateOfBirth3);
    Customer customer4("Bob", "BOB 7462", dateOfBirth4);
    Customer customer5("Roger", "ROG 4625", dateOfBirth5);
    
    Date reservationDate1(2,2,2019);
    Date reservationDate2(1,2,2019);
    Date reservationDate3(29,1,2019);
    Date reservationDate4(1,1,2019);
    Date reservationDate5(15,1,2019); 
    
    Date rentalStart1(3,2,2019);
    Date rentalStart2(5,2,2019);
    Date rentalStart3(4,3,2019);
    Date rentalStart4(4,4,2019);
    Date rentalStart5(23,5,2019);
    
    Date rentalEnd1(10,2,2019);
    Date rentalEnd2(23,2,2019);
    Date rentalEnd3(10,3,2019);
    Date rentalEnd4(12,4,2019);
    Date rentalEnd5(30,5,2019);
    
    ReservationRequest reserve1(customer1, "car", reservationDate1, rentalStart1, rentalEnd1, 5);
    ReservationRequest reserve2(customer2, "car", reservationDate2, rentalStart2, rentalEnd2, 4);
    ReservationRequest reserve3(customer3, "car", reservationDate3, rentalStart3, rentalEnd3, 8);
    ReservationRequest reserve4(customer4, "car", reservationDate4, rentalStart4, rentalEnd4, 7);
    ReservationRequest reserve5(customer5, "car", reservationDate5, rentalStart5, rentalEnd5, 2);
    
    int carSize = 5;
    
    Date joinedFleet1(3,2,2016);
    bool availability1[12][30] = {true};
    

    Date joinedFleet2(17,6,2011);
    Date joinedFleet3(4,4,2012);
    Date joinedFleet4(12,10,2015);
    Date joinedFleet5(14,11,2010);

    Car car1("Toyota", joinedFleet1, 15000, "0001", availability1, reserve1.getVehicleInfo());
    Car car2("Honda", joinedFleet2, 54230, "0002", availability1, reserve2.getVehicleInfo());
    Car car3("Ford", joinedFleet3, 34000, "0003", availability1, reserve3.getVehicleInfo());
    Car car4("Tesla", joinedFleet4, 45034, "0004", availability1, reserve4.getVehicleInfo());
    Car car5("Nissan", joinedFleet5, 12021, "0005", availability1, reserve5.getVehicleInfo());
    
    vector<Car> cars;
    vector<Truck> trucks;
    vector<Customer> customers;
    vector<VehicleRentalContract> carRentalContracts;
    
    cars.push_back(car1);
    cars.push_back(car2);
    cars.push_back(car3);
    cars.push_back(car4);
    cars.push_back(car5);
    
    customers.push_back(customer1);
    customers.push_back(customer2);
    customers.push_back(customer3);
    customers.push_back(customer4);
    customers.push_back(customer5);
    
    FleetManager fleetManager(carSize, 0, cars, trucks, customers, carRentalContracts);
    
    // process reservation:
    cout << "Reservation with request number " << fleetManager.processeReservation(reserve1) << " is processed\n"
    
    << "Reservation with request number " << fleetManager.processeReservation(reserve2)+1 << " is processed\n" 
    
    << "Reservation with request number " << fleetManager.processeReservation(reserve3)+2 << " is processed\n"  

    << "Reservation with request number " << fleetManager.processeReservation(reserve4)+3 << " is processed\n"

   << "Reservation with request number " << fleetManager.processeReservation(reserve5)+4 << " is processed\n";  
    
    // Set new mileage
    fleetManager.setNewMileage(reserve2.getRequestNumber(),100000);
    cout << "Mileage of reservation with request number " << reserve2.getRequestNumber() << " is set to 100 000 km\n";
    return 0;
}

