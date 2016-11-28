//
//  main.cpp
//  lab 3d
//
//  Created by Jeff on 8/31/16.
//  Copyright © 2016 Jeff zhang. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include "SavingsAcct.h"

using namespace std;

int main()
{
    SavingsAcct saver1( 2000.0 );
    SavingsAcct saver2( 3000.0 );
    
    SavingsAcct::modifyInterestRate( .03 ); // change interest rate
    
    cout << "Initial balances:\nSaver 1: ";
    saver1.printBalance();
    cout << "\tSaver 2: ";
    saver2.printBalance();
    
    saver1.calculateMonthlyInterest();
    saver2.calculateMonthlyInterest();
    
    cout << "\n\nBalances after 1 month's interest applied at .03:\n"
    << "Saver 1: ";
    saver1.printBalance();
    cout << "\tSaver 2: ";
    saver2.printBalance();
    
    SavingsAcct::modifyInterestRate( .04 ); // change interest rate
    saver1.calculateMonthlyInterest();
    saver2.calculateMonthlyInterest();
    
    cout << "\n\nBalances after 1 month's interest applied at .04:\n"
    << "Saver 1: ";
    saver1.printBalance();
    cout << "\tSaver 2: ";
    saver2.printBalance();
    cout << endl;
} // end main