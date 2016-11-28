//
//  main.cpp
//  as8
//  comsc 200
//  Created by Jeff on 10/8/16.
//  Copyright © 2016 Jeff zhang. All rights reserved.
//  completed
// Assignment 8 Esay Class test driver
// Assignment 8 Esay Class test driver
#include <iostream>
#include "Essay.h"
using namespace std;

int main()
{
    GradedActivity g85(85), g65(65);
    Essay report85(25, 20, 20, 20), report65(15, 10, 20, 20);

    cout << "g85(85):"
    << "\nGraded Score: " << g85.getScore()
    << ", Grade: " << g85.getLetterGrade()  << endl;


    cout << "\nreport85(25, 20, 20, 20): \n" << report85.toString()
    << "\nReport Score: " << report85.getScore()
    << ", Grade: " << report85.getLetterGrade() << endl;

    cout << "\ng65(65):"
    << "\nGraded Score: " << g65.getScore()
    << ", Grade: " << g65.getLetterGrade()  << endl;

    cout << "\nreport65(15, 10, 20, 20): \n" << report65.toString()
    << "\nReport Score: " << report65.getScore()
    << ", Grade: " << report65.getLetterGrade() << endl;

    return 0;

}
