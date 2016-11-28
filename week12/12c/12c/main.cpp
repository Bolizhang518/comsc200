//
//  main.cpp
//  12c
//
//  Created by Jeff on 10/31/16.
//  Copyright © 2016 Jeff zhang. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;
vector<int>  start, dest, temp;
void show_hanoi(){
    cout << "start: ";
    for (auto item:start)
        cout << item << " ";
    cout << "|dest: ";
    for (auto item:dest)
        cout << item << " ";
    cout << "|temp: ";
    for (auto item:temp)
        cout << item << " ";
}
void hanoi(int n, vector<int>&start, vector<int>&dest,vector<int>&temp){
    if(n<1) return;
    if(n==1){
        dest.push_back(start.back());
        start.pop_back();
        show_hanoi();
    }
    if(n>=2){
        hanoi(n-1,start,temp,dest);
        dest.push_back(start.back());
        start.pop_back();
        show_hanoi();
        hanoi(n-1, temp,dest,start);
        
    }
}

int main(int argc, const char * argv[]) {
    int height;
    cout << " enter the heigth: " ;
    cin >> height;
    
    for(int i =0 ; i < height; i++){
        start.push_back(height-1);
    }
    show_hanoi();
    hanoi(height,start,dest,temp);
    cout << "\n program exit !";
    
    
    
}
