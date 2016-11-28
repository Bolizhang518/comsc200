//  comsc 200
//  main.cpp
//  8a
//  completed 
//  Created by Jeff on 10/3/16.
//  Copyright © 2016 Jeff zhang. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include <sstream>
using namespace std;

class Shap{
protected:
    double area;
public:
    virtual void setArea() = 0;
};
class Rectangle:public Shap{
private:
    long width,length;
public:
    Rectangle(long w,long l){
        width = w;
        length = l;
        setArea();
    }
    double getArea()const {
        return area;
    };
    void setArea(){
        area= width*length;
    }
};


class Circle:public Shap{
private:
    long centerx;
    long centery;
    double radius;
public:
    Circle(long x,long y, long r){
        centerx=x;
        centery = y;
        radius = r;
        setArea();
    }
    double getArea()const{
        return area;
    }
    void setArea(){
        area= 3.14*radius*radius;
    }
};

int main(){
// instanciate abstract class test
// Shape s();
// Demonstrate a Circle.
    long x,y,length,width;
    double rad;
std::cout << "Enter the x, y coordinate  and radius of the circle's center: ";
std::cin >> x >> y >> rad;
std::cout << "\nCordinate x: " << x << ", y: " << y << ", and radius: " << rad << "\n";

Circle c(x,y,rad);
std::cout << "The area of the circle is " << c.getArea()  << ".";

// Demonstrate a Rectangle.
std::cout << "\n\nPlease enter the length and width of the rectangle: ";
std::cin >> length >> width;
std::cout << "\nYou have entered the length: " << length << " and the width: " << width << "\n";

Rectangle r(width, length);
std::cout << "The area of the rectangle is " << r.getArea() << ".\n";
}
