//
//  main.cpp
//  lab2c
//
//  Created by Jeff on 8/24/16.
//  Copyright © 2016 Jeff zhang. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    string testString[6]{
        "ABLE WAS I ERE I SAW ELBA",
        "FOUR SCORE AND SEVEN YEARS AGO",
        "NOW IS THE TIME FOR ALL GOOD MEN",
        "DESSERTS I STRESSED",
        "AKS NOT WHAT YOUR COUNTRY CAN DO FOR YOU",
        "KAYAK",
    };
    for(int i=0;i<6;i++){
        string rev = string(testString[i].rbegin(),testString[i].rend());
        cout<< "\" "<<testString[i] << "\"" ;
        if(testString[i].compare(rev)== 0)
            cout <<"is a palinedrome. " << "\n" ;
        else
            cout << "   is not a palinedrome" << endl;
        
    }
    
    
}
