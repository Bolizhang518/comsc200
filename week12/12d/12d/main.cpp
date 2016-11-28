//  comsc 200
//  main.cpp
//  12d
//   boli zhang
//  Created by Jeff on 11/2/16.
//  Copyright © 2016 Jeff zhang. All rights reserved.
//

#include <iostream>
#include <deque>
#include <iterator>
using namespace std;


int main() {
    deque<double>ddq;
    
    cout << "add some numbers to the back, 0 to end: ";
    istream_iterator<double>dbl_itr(cin);
    while(true){
        
        if(*dbl_itr == 0) break;
        ddq.push_back(*dbl_itr);
        ++dbl_itr;
        
    }
    cout << " \n the deque: ";
    for (auto item:ddq) cout << item << " ";
    cout << "add some numbers to the front, 0 to end " ;
    ++dbl_itr;
    while(true){
        
        if(*dbl_itr == 0) break;
        ddq.push_front(*dbl_itr);
        ++dbl_itr;
    }
    cout << " \n the deque: ";
      for (auto item:ddq)
          cout << item << " ";
    
    cout << "\nPop_front;  \n\tThe Deque: ";
    ddq.pop_front();
    for (auto item:ddq)
        cout << item << " ";
    
    cout << "\nPop_back;  \n\tThe Deque: ";
    ddq.pop_back();
    for (auto item:ddq)
        cout << item << " ";
   

    cout << "\ncopy constructor example\n";
    deque<double> values(ddq);
    cout << "\n\tthe duplicated deque: ";
    for (auto item:ddq)
        cout << item << " " ;
    cout << endl;
    
    ddq.pop_front();
    ddq.pop_front();
    cout << "\nddq[1] = 99.9\n";
    cout << "\n\tthe Deque: ";
    ddq.push_front(99.9);

    
    for (auto item:ddq)
        cout << item << " ";
        cout << endl;
}








