//
//  main.cpp
//  12a
//
//  Created by Jeff on 10/31/16.
//  Copyright © 2016 Jeff zhang. All rights reserved.
//

#include <iostream>
#include <string>
#include <cstring>

using namespace std;


void Reverser(string a,int last_index){
    if(0 <= last_index){
        cout<<a[last_index];
        Reverser(a,last_index-1);
    }
    else
        return;
}

int main(int argc, const char * argv[]) {
    string a;
    cout << " give me a string : " ;
    getline(cin,a);
    Reverser(a,a.length()-1);
  
}
