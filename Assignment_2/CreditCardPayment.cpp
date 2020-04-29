/*
 * Author: Jasen Ratnam 40094237
 * Date: 2/2/2019
 * Due date: 11/2/2019
 * Assignment 2
 * CreditCardPayment class, inheritance from payment
 * defines functions
 */

#include "CreditCardPayment.h"
#include <iostream>
#include <cstring>

using namespace std;

// default constructor/ 
// calls Payment default constructor and adds the credit card information
CreditCardPayment::CreditCardPayment(): Payment() 
{
    Date date;
    setCardName("Jasen Ratnam");
    setExpirationDate(date);
    setCardNumber("4309 2387 2364 6892");
}

// regular constructor/ 
// calls Payment regular constructor and adds the credit card information
CreditCardPayment::CreditCardPayment(float payment, const char* cardName1, Date expirationDate, const char* cardNumber1): Payment(payment) 
{
    cardName = new char[ strlen( cardName1 ) + 1 ];
    strcpy( cardName, cardName1 );
    setExpirationDate(expirationDate);
    cardNumber = new char[ strlen( cardNumber1 ) + 1 ];
    strcpy( cardNumber, cardNumber1 );
}

// destructor
// deletes the pointers objects
// overrides the Payment destructor
CreditCardPayment::~CreditCardPayment()
{
    delete cardName;
    delete cardNumber;
    cout << "Credit card payment object deleted\n";
}

// prints the payment details
// overrides the Payment printer
void CreditCardPayment::paymentDetails() const
{
     cout << "The amount of the payment is        " << this->getPayment() << " in credit.\n"
          << "The credit card number is:          " << this->getCardNumber() << "\n"
          << "The name on the credit card is:     " << this->getCardName() << "\n"
          << "The expiration date of the card is: ";
     this->getExpirationDate().printDate();
}

// Set the name on the card
void CreditCardPayment::setCardName(char* cardName1)
{
    cardName = new char[ strlen( cardName1 ) + 1 ];
    strcpy( cardName, cardName1 );
}

// set the expiration on the card
void CreditCardPayment::setExpirationDate(Date expirationDate)
{
    this->expirationDate = expirationDate;
}

// set the card number
void CreditCardPayment::setCardNumber(char* cardNumber1)
{
    cardNumber = new char[ strlen( cardNumber1 ) + 1 ];
    strcpy( cardNumber, cardNumber1 );
    
}

// return the name on the card
char* CreditCardPayment::getCardName() const
{
    return cardName;
}

// return the expiration date of the card
Date CreditCardPayment::getExpirationDate() const
{
    return expirationDate;
}

// return the card number
char* CreditCardPayment::getCardNumber() const
{
    return cardNumber;
}
