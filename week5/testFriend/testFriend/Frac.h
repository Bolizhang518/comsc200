//
//  Frac.h
//  testFriend
//
//  Created by Jeff on 9/14/16.
//  Copyright © 2016 Jeff zhang. All rights reserved.
//

#ifndef Frac_h
#define Frac_h

#include <string>

class Frac;
std::ostream &operator << (std::ostream &, const Frac &);

class GoodFriend{
public:
    void showFrac(Frac &);
};


class Frac{
private:
    long num;
    long den;
    long gcd(long a, long b){
        long c = a%b;
        while(c!=0){
            a = b;
            b = c;
            c = a%b;
        }
        return b;
    };
    void lowTerm(){
        long g = gcd(num,den);
        num = num/g;
        den = den/g;
    };
    
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
        num=n;
        den=d;
        lowTerm();
    };
    
    Frac(const Frac &x){   //copy constructor: Frac x(y) that accept a Frac object as an argument.
        num = x.num;
        den = x.den;
    };
    void set(long n, long d){
        num=n;
        den=d;
        lowTerm();
    };
    //post pre increment
    
    Frac operator++ (int){Frac copy = *this;num+=1;
        return copy;};
    Frac operator++ (){num++; return *this;};
    
    Frac operator-- (int){Frac copy = *this;num-=1;
        return copy;};
    Frac operator-- (){num--; return *this;};
    
    
    
    Frac operator + (const Frac &x){
        Frac temp;
        temp.num = num*x.den + x.num*den;
        temp.den = den*x.den;
        return temp;
    };
    
    Frac& operator+= (const Frac &x){
        Frac temp;
        temp.num = num;//*x.den; // - x.num*den;
        temp.den = den;//*x.den;
        return temp;
    };
    
    Frac& operator - (const Frac &right){
        Frac left;
        left.num = num*right.den - right.num*den;
        left.den = den*right.den;
        return left;
    };
    
    friend void showFrac(Frac&);
    
    
    
    friend class BestFreiend;
    
    
    
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
    
    std::string returnObj(){
        std::string s = std::to_string(num) +  "/" + std::to_string(den);
        return s;
    }
    
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

void showFrac(Frac &f){
    std::cout < " " <<f.num << "/" <<f.den << " ";
}


#endif /* Frac_h */

#endif /* Frac_h */
