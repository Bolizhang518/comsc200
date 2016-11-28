//
//  SavingsAcct.cpp
//  lab 3d
//
//  Created by Jeff on 8/31/16.
//  Copyright © 2016 Jeff zhang. All rights reserved.
//

#include <stdio.h>
//#inlcude "SavingsAcct.h"
//#import "SavingsAcct.h"


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
