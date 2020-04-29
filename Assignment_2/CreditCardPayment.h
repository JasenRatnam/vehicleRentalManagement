/*
 * Author: Jasen Ratnam 40094237
 * Date: 2/2/2019
 * Due date: 11/2/2019
 * Assignment 2
 * CreditCardPayment class, inheritance from payment
 * File that contains the specification of the class CreditCardPayment.
 * Initializes the functions and variables used in the class CreditCardPayment.
 */

#ifndef CREDITCARDPAYMENT_H
#define CREDITCARDPAYMENT_H

#include "Date.h"
#include "Payment.h"


class CreditCardPayment : public Payment {
public:
    
    // Constructors
    CreditCardPayment(); // default
    CreditCardPayment(float payment, const char* cardName, Date expirationDate, const char* cardNumber); // regular
    ~CreditCardPayment(); // destructor
    
    // Print payment details
    void paymentDetails() const;
    
    // setters
    void setCardName(char* cardName);
    void setExpirationDate(Date expirationDate);
    void setCardNumber(char* cardNumber);
    
    //  getter
    char* getCardName() const;
    Date getExpirationDate() const;
    char* getCardNumber() const;
    
private:
    
    // data members
    char* cardName; // name on credit card
    Date expirationDate; // expiration date of card 
    char* cardNumber;  // credit card number


};

#endif /* CREDITCARDPAYMENT_H */

