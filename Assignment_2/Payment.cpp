/*
 * Author: Jasen Ratnam 40094237
 * Date: 2/2/2019
 * Due date: 11/2/2019
 * Assignment 2
 * Payment class
 * Define the class
 */

#include <iostream>
#include <cstring>
#include "Payment.h"

using namespace std;

// default constructor
Payment::Payment() 
{
    setPayment(120); // set default payment to 120$
}

// regular constructor
Payment::Payment(float payment)
{
    setPayment(payment); //set payment to given info
}

// destructor
// No pointers to delete
Payment::~Payment() 
{
    // Nothing to do
}

// set the payment value
void Payment::setPayment(float payment)
{
    this->payment = payment;
}

// print the payment details
void Payment::paymentDetails() const
{
    cout << "The amount of the payment is " << payment << "\n";
}

// return payment value
float Payment::getPayment() const
{
    return payment;
}

