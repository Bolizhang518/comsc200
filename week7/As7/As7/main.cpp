//  comsc 200
//  main.cpp
//  As7
//  completed
//  Created by Jeff on 10/3/16.
//  Copyright © 2016 Jeff zhang. All rights reserved.
//

#include <iostream>
#include <string>
//Ship.h
//CruiseShip.h
//CargoShip.h

using namespace std;
class ship{
private:
    string name;
    int year;
public:
    
 ship()
{
	name ="Lolipop";
	year = 1960;

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
void display() {
	cout << "Name : " << this->getName() << "\n" << "Year built : " << getYear() << "\n";

};

};

class cruise : public ship{
private:
    string name;
    int Max;
public:
    cruise()
    {
        name ="Disney Magic ";
        Max = 2400;
        
    };
    cruise(string n, int m){
        name = n ;
        Max = m ;
    };
    void setName(string n){
        name = n;
    }
    void setMax(int m){
        Max = m;
    }
    string getName()const{
        return name;
    }
    int getMax()const{
        return Max;
    }

    void display(){
        cout << "Name : " << this->getName() << "\n" << "Maximum passengers : " << getMax() << "\n";
    }
};

class CargoShip : public ship{
private:
    string name;
    string cargo;
public:
    CargoShip()
    {
        name ="Black Pearl  ";
        cargo = "50000 tons";
        
    };
    CargoShip(string n, int c){
        name = n ;
        cargo = c ;
    };
    void setName(string n){
        name = n;
    }
    void setCargo(int c){
        cargo = c;
    }
    string getName()const{
        return name;
    }
    string getCargo()const{
        return cargo;
    }
    
    void display(){
        cout << "Name : " << this->getName() << "\n" << "Cargo capacity: : " << getCargo() << "\n";
    }
};

int main() {
    // insert code here...
    cout << "\n---------\n";
	ship *s = new ship();
    cruise *c = new cruise();
    CargoShip *car = new CargoShip();
	s->display();
    cout << "\n---------\n";
    c->display();
    cout << "\n---------\n";
    car->display();
}
