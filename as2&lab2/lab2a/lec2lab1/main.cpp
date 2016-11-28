//This is Lab2A
//  main.cpp
//  lec2
//
//  Created by Jeff on 8/22/16.
//  Copyright © 2016 Jeff zhang. All rights reserved.


#include <iostream>
#include <string>
using namespace std;
class Car{
          private:
          int year;
          string make;
          int speed;
    
          public:
          //constructor
          Car(int y,std::string m){
              year=y; make=m; speed=0;
          }
          Car(Car &c){
              year = c.year;
              make =c.make;
              speed = c.speed;
          }
    
          // getter
          
          int getYear(){return year;};
          string getMake(){return make;};  // ??
          int getSpeed(){return speed;};
          
          
          //setter
          
          void setYear(int y){year = y;}
          int accelerate(){
              if(speed <25){
                      
                return speed += 5;
                  
              }
              
              else
                  return speed;
    };
          void brake(){
              if(speed >=25){
                  
                 
                  while(speed !=0){
                       speed -=5;
                      
                      std::cout<<"braking.....  "<<"\n"<<"current speed: " << speed << ' ' << "\n";
                  }
               
              
              }
              else
              {
                  std::cout << "accelerating " << "\n";
              }
          }
};


int main(){
    
    Car porsche(2016,"porsche");
    cout<<"my car Made by "<<porsche.getMake()<< ".\n";
    cout<<"current speed : "
    <<porsche.getSpeed()<<" mile per hour. \n";
    
    for(int count=0;count<10;count++){
        porsche.accelerate();
        cout<<"current speed "<<porsche.getSpeed() << " mile per hour.\n";
        porsche.brake();
        
        
       }
    }
//};
