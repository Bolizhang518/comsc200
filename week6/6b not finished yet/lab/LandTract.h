//
//  main.cpp
//  lab6a
//
//  Created by Jeff on 9/19/16.
//  Copyright © 2016 Jeff zhang. All rights reserved.
//

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

class FeetInches;
ostream &operator << (ostream&, const FeetInches&);
istream &operator >> (istream&, FeetInches&);

class FeetInches{
private:
    int feet,inches;
    void lowTerm(){
        if(inches > 12){
            feet +=inches/12;
            inches = inches%12;
        }
    };
public:
    //string argument constructor
    FeetInches(int f,int i){
        feet = f;
        inches =i;
    };
    FeetInches(string s);
    
    
    void setFeet(int f){ feet=f;};
    void setInches(int i){ inches=i;};
    
    int getFeet()const{return feet;};
    int getInches()const{return inches;};
    //friend funciton for operator
    //friend ostream &operator <<(ostream,const FeetInches&);
    //friend  istream &operator>> (istream&, FeetInches&);
    
    friend ostream &operator << (ostream & stm, const FeetInches &obj) {
        return stm << "( " << obj.feet << " feet, " << obj.inches << " inches)";
        
    }
    
    friend istream &operator >> (istream & ss, FeetInches &obj) {
        ss >>obj.feet;
        char c = ss.peek();
        if(ss && c=='\'')
            ss.get();
        return ss>>obj.inches;
        
        
    }
};
FeetInches::FeetInches(string s){
    stringstream ss(s);
    ss >>feet;
    char c = ss.peek();
    if(ss && c=='\'')
        ss.get();
    ss>>inches;
    
};
int main() {
    string input;
    int feet,inches;
    cout << "enter a new fetiches - \n\t feet = ";
    cin >> feet;
    cout << "\t inches = ";
    cin >> inches;
    FeetInches fi0(feet,inches);
    cout << "you have created a "<< fi0.getFeet()<< " \'"
    << fi0.getInches() << "\" FeetInches instance.\n";
    
    cout << "creating a feetinches(\"3\\\'4\"): ";
    FeetInches fil("3'4\"");
    cout << "\n the test driver has created: ";
    cout <<fil<<endl;
    
    FeetInches fi2(1,1);
    cout << "\n Enter another feetInches (2\'3\"): ";
    cin >>fi2;
    cout << "you have enter a" <<fi2 << "instance." <<endl;
}
