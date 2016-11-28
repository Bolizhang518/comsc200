//  course : comsc - 200
//  main.cpp
//  AS3
//  completed
//  Created by Jeff on 9/1/16.
//  Copyright © 2016 Jeff zhang. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

//declear a number class
//which include month and day

class Numbers{
    
private:
    int number;  //hold a number
    static string month[12];
    static int lessThan31[31];
public:
    Numbers(int x){
        number = x;
        
    }
    void print();
};


//static member varibale must be define outside of the class
//define the string number::month

string Numbers::month[12] = {
    "January","February","March",
    "April","May","June","July","August","September","October","November","December",
    
};





//define the string number::day  ?? or not ??


// void print
void Numbers::print()
{
    int residue = number;
    
    int n_month = residue/31;
    residue = residue % 31;
    if(number>31 ){
        cout << " " << month[n_month] << " " << residue <<endl;
        
    }
    if(n_month<=1 && number <=31)
        
        cout<< "January " << " " << number;
    
    
}

int main() {
    int number;
    
    cout << "This program coverts a number "<< endl;
    cout <<"into a string representing the month and day"<<endl;
    cout <<"Enter a whole number between 1 and 365 : ";
    cin >> number;
    
    do{
        Numbers n(number);
        n.print();
        cout<< "\n Enter another number: ";
        cin >> number;
        
    }while(number<365);
    cout << "you entered an out of range number! " << endl;
    return 0;
}
