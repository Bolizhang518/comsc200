//
//  Ship.h
//  As7
//
//  Created by Jeff on 10/3/16.
//  Copyright © 2016 Jeff zhang. All rights reserved.
//

#ifndef Ship_h
#define Ship_h
#include <iostream>
#include <sstream>
#include <string>
using namespace std;
class ship{
private:
    string name;
    int year;
public:
    
 ship()
{
	name ="";
	year = 0;

};

ship(string n, int y){
	name = n ;
	year = y ;
};
void setName(string n){
	 name = n;
}
void setYear(int y){
	 year = y;
}
string getName()const{
	return name;
}
int getYear()const{
	return year;
}
    
void display();
    };
void ship::display() {
	cout << "Name : " << this->getName() << "\n" << "Year built : " << getYear() << "\n";

};


#endif /* Ship_h */
