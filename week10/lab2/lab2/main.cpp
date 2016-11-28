//
//  main.cpp
//  lab1
//
//  Created by Jeff on 10/17/16.
//  Copyright © 2016 Jeff zhang. All rights reserved.
//

#include <iostream>
#include "StringStack.h"

using namespace std;

int main(int argc, const char * argv[]) {
    string catchVar; // To hold values popped off the stack
    
    // Define a stack object to hold 5 values.
    StringStack stk(5);
    
    // Push the values is, very, interesting, and, fun onto the stack.
    cout << "...push(\"Push words\");\n";
    stk.push("Push words"); stk.display();
    cout << "...push(\"into a stack\");\n";
    stk.push("into a stack"); stk.display();
    cout << "...push(\"is very\");\n";
    stk.push("is very"); stk.display();
    cout << "...push(\"interesting\");\n";
    stk.push("interesting"); stk.display();
    cout << "...push(\"and fun!\");\n";
    stk.push("and fun!"); stk.display();
    try {
        stk.pop(catchVar);
    } catch (StringStack::Excep_over) {
        std::cout << ".EXP. Over !\n";
    }

    
    // Pop the values off the stack.
    cout << "...pop\n";
    stk.pop(catchVar); stk.display();
    cout << "...pop\n";
    stk.pop(catchVar); stk.display();
    cout << "...pop\n";
    stk.pop(catchVar); stk.display();
    cout << "...pop\n";
    stk.pop(catchVar); stk.display();
    cout << "...pop\n";


//    stk.pop(catchVar); stk.display();
//    cout << "...pop\n";
//    stk.pop(catchVar); stk.display();
//
    try {
        stk.pop(catchVar);
    } catch (StringStack::Excep_Under) {
        std::cout << ".EXP. Empty Stack!\n";
    }
    stk.display();
    cout << "\n exit program " <<endl;
    return 0; 

};

