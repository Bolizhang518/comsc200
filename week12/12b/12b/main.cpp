//
//  main.cpp
//  12b
//
//  Created by Jeff on 10/31/16.
//  Copyright © 2016 Jeff zhang. All rights reserved.
//

#include <iostream>
using namespace std;

int h = 0;
int rabbit ( int n){
    string tabs(h,'\t');
    if(n >h) h++;
    if(n <=2){
        cout << tabs << " Enter n = " << n << endl;
        cout << tabs << "leave n = " << n << "  instance <= 1" << endl;
    
        return 1;
    }
    else{
        cout <<tabs << " Enter n = " << n << endl;
//        return rabbit(n-1)+rabbit(n - 2);
        int x = rabbit(n-1)+rabbit(n - 2);
        cout << "leave n = " << n << "instance = " << x << endl;
        n--;
        return x;
    }
}
int main() {
    int gen;
    cout << " how many generations ? ";
    cin >>gen;
    cout << rabbit(gen) << endl;
}
