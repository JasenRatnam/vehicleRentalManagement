/*
 * Author: Jasen Ratnam 40094237
 * Date: 2/2/2019
 * Due date: 11/2/2019
 * Assignment 2
 * CashPayment class, inheritance from payment
 * Defines the functions
 */

#include "CashPayment.h"
#include "Payment.h"
#include <iostream>

using namespace std;

// default constructor/ 
// calls Payment default constructor 
CashPayment::CashPayment() : Payment() 
{
    // do nothing
}

// regular constructor/
// calls PAyment regular constructor
CashPayment::CashPayment(float payment) : Payment(payment) 
{
    // do nothing
}

// No pointers to delete
CashPayment::~CashPayment() 
{
    // Do nothing
}

// overrides print of Payment class
// Print information of the cash payment
void CashPayment::paymentDetails() const
{
    cout << "The amount of the payment is " << this->getPayment() << " in cash.\n";
}

