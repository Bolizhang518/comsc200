//
//  test.cpp
//  lab7b
//
//  Created by Jeff on 9/28/16.
//  Copyright © 2016 Jeff zhang. All rights reserved.
//

#include "test.hpp"
#include "main.cpp"
// testBase.cpp

#include <iostream>
using namespace std;

class Base{
public:
    int mPublic;
private:
    int mPrivate;
protected:
    int mProtected;
public:
    Base(): mPublic(0), mPrivate(0), mProtected(0){
        cout << "\nmPublic: " << mPublic
        << "\nmPrivate: " << mPrivate
        << "\nmProtected: " << mProtected
        << "\n   . created Base";}
    int get_mPublic() {return mPublic;}
    int get_mPrivate() {return mPrivate;}
    int get_mProtected() {return mProtected;}};

class Pub: public Base{
public:
    int get_Pub_mPublic(){return mPublic;}
    int get_Pub_mProtected(){return mProtected;}
    
    Pub(){
        mPublic = 1;
        mProtected = 3;
        cout << "\n   . inherited and modified by cPub"
        << "\nmPublic: " << mPublic
        << "\nmPrivate not available, use get_mPrivate(): " << get_mPrivate()
        << "\nmProtected: " << mProtected
        << "\n   . created cPub";}};

class Pro: protected Base{
public:
    int proPublic;
private:
    int proPrivate;
protected:
    int proProtected;
public:
    int get_Pub_mPublic(){return mPublic;}
    int get_Pub_mProtected(){return mProtected;}
    
    Pro(){
        mPublic = 4;
        mProtected = 6;
        cout << "\n   . inherited and modified by ProPro"
        << "\nmPublic: " << mPublic
        << "\nmPrivate not available, cannot use get_mPrivate() "
        << "\nmProtected: " << mProtected
        << "\n   . created cPub";}};



class ProPro: protected Pro{
public:
    int get_Pro_mPublic(){return mPublic;}
    int get_Pro_mProtected(){return mProtected;}
    
    ProPro(){
        proPublic = 14;
        proProtected = 16;
        cout << "\n   . inherited and modified by cProPro"
        << "\nmPublic: " << mPublic
        << "\nmPrivate not available, cannot use get_mPrivate() "
        << "\nmProtected: " << mProtected
        << "\n   . created cProPro";}};

class ProProPro: protected ProPro{
public:
    int get_ProPro_mPublic(){return mPublic;}
    int get_ProPro_mProtected(){return mProtected;}
    
    ProProPro(){
        proPublic = 24;
        proProtected = 26;
        cout << "\n   . inherited and modified by cProProPro"
        << "\nmPublic: " << mPublic
        << "\nmPrivate not available, cannot use get_mPrivate() "
        << "\nmProtected: " << mProtected
        << "\n   . created cProPro";}};

class Pri: private Base{
public:
    int get_Pub_mPublic(){return mPublic;}
    int get_Pub_mProtected(){return mProtected;}
    
    Pri(){
        mPublic = 7;
        mProtected = 9;
        cout << "\n   . inherited and modified by cPri"
        << "\nmPublic: " << mPublic
        << "\nmPrivate not available, cannot use get_mPrivate() "
        << "\nmProtected: " << mProtected
        << "\n   . created cPub";}};

int main() {
    cout << "\n ... creating cPub";
    Pub cPub;
    cPub.mPublic = 4;
    cout << "\n  .. created cPub";
    cout << "\n  .. access cPub by application\n"
    << "\ncPub.get_Pub_mPublic(): " << cPub.get_Pub_mPublic()
    << "\ncPub.get_Pub_mPrivate(): " << "don't work!"
    << "\ncPub.get_Pub_mProtected(): " << cPub.get_Pub_mProtected()
    << "\n";
    
    cout << "\n ... creating cPri";
    Pri cPri;
    cout << "\n  .. created cPri";
    cout << "\n  .. access cPri by application"
    << "\ncPri.get_Pub_mPublic(): " << cPri.get_Pub_mPublic()
    << "\ncPri.get_Pub_mPrivate(): " << "don't work!"
    << "\ncPri.get_Pub_mProtected(): " << cPri.get_Pub_mProtected()
    << "\n";
    
    
    cout << "\n ... creating cPro";
    Pro cPro;
    cout << "\n  .. created cPro";
    cout << "\n  .. access cPro by application"
    << "\ncPro.get_Pub_mPublic(): " << cPro.get_Pub_mPublic()
    << "\ncPro.get_Pub_mPrivate(): " << "don't work"
    << "\ncPro.get_Pub_mProtected(): " << cPro.get_Pub_mProtected()
    << "\n";
    
    
    cout << "\n ... creating cProPro";
    ProPro cProPro;
    cout << "\n  .. created cProPro";
    cout << "\n  .. access cProPro by application"
    << "\ncProPro.get_Pro_proPublic(): " << cProPro.get_Pro_mPublic()
    << "\ncProPro.get_Pro_proPrivate(): " << "don't work"
    << "\ncProPro.get_Pro_proProtected(): " << cProPro.get_Pro_mProtected()
    << "\ncPro.get_Pub_mPublic(): " << cPro.get_Pub_mPublic()
    << "\ncPro.get_Pub_mPrivate(): " << "don't work"
    << "\ncPro.get_Pub_mProtected(): " << cPro.get_Pub_mProtected()
    << "\n";
    
    cout << "\n ... creating cProProPro";
    ProProPro cProProPro;
    cout << "\n  .. created cProProPro";
    cout << "\n  .. access cProProPro by application"
    << "\ncProProPro.get_ProPro_proProPublic(): "  <<  cProProPro.get_ProPro_mPublic()
    << "\ncProProPro.get_ProPro_proProPrivate(): " << "don't work"
    << "\ncProProPro.get_ProPro_proProProtected(): "  << cProProPro.get_ProPro_mProtected()
    << "\ncPro.get_Pub_mPublic(): " << cPro.get_Pub_mPublic()
    << "\ncPro.get_Pub_mPrivate(): " << "don't work"
    << "\ncPro.get_Pub_mProtected(): " << cPro.get_Pub_mProtected()
    << "\n";
    cout << "\n ... creating a Base cBase";
    Base cBase;
    cout << "\n  .. created a Base cBase";
    cBase.mPublic = 4;
    
    cout << "\n  .. direct access cBase by application"
    << "\ncBase.mPrublic: " << cBase.mPublic 
    << "\ncBase.mPrivate: " << "inaccessible, a private member!" 
    << "\ncBase.mProtected: " << " inaccessible, a protected member!" 
    << "\n";
    
}
