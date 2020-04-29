/*
 * Author: Jasen Ratnam 40094237
 * Date: 2/2/2019
 * Due date: 11/2/2019
 * Assignment 2
 * Payment class
 * File that contains the specification of the class Payment.
 * Initializes the functions and variables used in the class Payment.
 */

#ifndef PAYMENT_H
#define PAYMENT_H

class Payment {
public:
    
    // constructors
    Payment(); // default
    Payment(float payment); // regular
    ~Payment(); // destructor
    
    // setter
    void setPayment(float payment);
    
    // Print the details of the payment
    void paymentDetails() const;
    
    // getters
    float getPayment() const;
    
private:
    
    // data members
    float payment; // Payment paid
};

#endif /* PAYMENT_H */

