/*
 * Author: Jasen Ratnam 40094237
 * Date: 2/2/2019
 * Due date: 11/2/2019
 * Assignment 2
 * CashPayment class, inheritance from payment
 * File that contains the specification of the class CashPayment.
 * Initializes the functions and variables used in the class CashPayment.
 */

#ifndef CASHPAYMENT_H
#define CASHPAYMENT_H
#include "Payment.h"

class CashPayment : public Payment {
public:
    
    //constructors
    CashPayment(); // default
    CashPayment(float payment); // regualr
    ~CashPayment(); // destructor
    
    // print payment details
    void paymentDetails() const; 

};

#endif /* CASHPAYMENT_H */

