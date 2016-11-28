//
//  SavingsAcct.h
//  lab 3d
//
//  Created by Jeff on 8/31/16.
//  Copyright © 2016 Jeff zhang. All rights reserved.
//

#ifndef SAVINGSACCT_H
#define SAVINGSACCT_H

class SavingsAcct{
private:
    
    static double annualInterestRate;
    double balance;
    
public:
    SavingsAcct(double b)
    {
        balance = b;
    };
   void calculateMonthlyInterest();
    static void modifyInterestRate(double);
    void printBalance();
    
};
/*
double SavingsAcct::annualInterestRate = 0.0;

void SavingsAcct::calculateMonthlyInterest(){
    balance += balance*annualInterestRate /12.0;
}

 void SavingsAcct::modifyInterestRate(double r){
    if(0.0 <= r && r <= 1.0)
        annualInterestRate = r ;
}

void SavingsAcct::printBalance(){
    std::cout << std::fixed << std::setprecision(2) << balance ;
}
*/

#include "SavingsAcct.cpp"
#endif /* SavingsAcct_h */
