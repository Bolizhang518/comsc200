//comsc 200
//incompeleted
//boli zhang
//  PayRoll.h
//  As4.1
//
//  Created by Jeff on 9/10/16.
//  Copyright © 2016 Jeff zhang. All rights reserved.
//

#ifndef PayRoll_h
#define PayRoll_h


class PayRoll{

private:

    double rate;
    int hours;

public:
    //constructor
    PayRoll(){
    rate = 0; hours = 0;
    }
    PayRoll(double r,int h){
        setRate(r);
        setHours(h);
    }
   //setter
    void setRate(double r){
        rate = r;
    }
    void setHours(int h){
        hours = h;
    }
    //getter
    int getHours(){
        return hours;
    }
    double getRate(){
        return rate;
    };
    //feature
    void totall(){

        std::vector<double> myvector;
        double tt = rate * hours;
        std::cout <<"rate: " << getRate()<< "\n";
        myvector.push_back(tt);
        std::cout << "myvector contains:";
        for (std::vector<double>::iterator it = myvector.begin() ; it != myvector.end(); ++it)
            std::cout << ' ' << *it;
        std::cout << '\n';

    }

};

#endif /* PayRoll_h */
