//
//  main.cpp
//  10c
//
//  Created by Jeff on 10/19/16.
//  Copyright © 2016 Jeff zhang. All rights reserved.
//

#include <iostream>
#include "stack.h"
#include <vector>



using namespace std;

int main(int argc, const char * argv[]) {
    int catchVar; // To hold values popped off the stack
    
    // Define a stack object to hold 5 values.
     Stack<int> stk(5);
    
    // Push the values is, very, interesting, and, fun onto the stack.
    for(int i=1; i<=6; i++) {
        cout << "...push " << i*5 << "\n" ;
        try{
            stk.push(i*5);
        }catch(Stack<int>::Excep_over){
            cout<<" .ERR.The stack is full."<<endl;
        }
        //        stk.push(i*5);
                stk.display();
    }
    
    cout << endl;
    // Pop the values off the stack.
    for(int i=1; i<=6; i++) {
        cout << "...pop\n";
        try{
            stk.pop(catchVar);
        }catch(Stack<int>::Excep_Under){
            cout << ".ERR.The stack is empty."<<endl;
            
        }
        //        stk.pop(catchVar);
               stk.display();
    }
    
};

