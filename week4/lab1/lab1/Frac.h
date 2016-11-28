//  comsc 200
//  boli zhang
//  completed
//  Frac.h
//  lab1
//
//  Created by Jeff on 9/7/16.
//  Copyright © 2016 Jeff zhang. All rights reserved.
//

#ifndef Frac_h
#define Frac_h
#include <string>

class Frac;
std::ostream &operator << (std::ostream &, const Frac &);

class Frac{
private:
    long num;
    long den;
    
public:
    Frac(){
        num=0;
        den=1;
    };
    Frac(long n){
        num=n;
        den=1;
    };
    Frac(long n,long d){
        num=n;  den=d;
    };
    /*
    Frac& operator =(const Frac &x) {   //assignment (=) operator.
        num = x.num;
        den = x.den;
    }
    */
    Frac(const Frac &x){   //copy constructor: Frac x(y) that accept a Frac object as an argument.
        num = x.num;
        den = x.den;
    };
    /*
    Frac& operator = (const Frac &x){
        num = x.num;
        den =x.den;
    }
    */
    Frac& operator + (const Frac &right){
        Frac left;
        left.num = num*right.den + right.num*den;
        left.den = den*right.den;
        return left;
    };
    
    Frac& operator - (const Frac &right){
        Frac left;
        left.num = num*right.den - right.num*den;
        left.den = den*right.den;
        return left;
    };
    
    Frac& operator * (const Frac &right){
        Frac left;
        left.num = num*right.num;
        left.den = den*right.den;
        return left;
    };
    Frac& operator / (const Frac &right){
        Frac left;
        left.num = num*right.den;
        left.den = den*right.num;
        return left;
    };

    void show(){
        std::cout<<num << "/" <<den ;
    }
    std::string toString(){
        return std::to_string(num) + "/" + std::to_string(den);
       
    }
    // friend ostream operator << function definition
    friend std::ostream &operator << (std::ostream &strm, const Frac &right){
        strm << right.num << "/" << right.den;
        return strm;

    }
    
    bool operator > (const Frac &x){
     if(num*x.den > den*x.num)
         return true;
     else return false;
    }
    
    bool operator < (const Frac &x){
        if(num*x.den < den*x.num)
            return true;
        else return false;
    }

};

#endif /* Frac_h */
