//
//  InsStack.h
//  lab1
//
//  Created by Jeff on 10/17/16.
//  Copyright © 2016 Jeff zhang. All rights reserved.
//

#ifndef IntStack_h
#define IntStack_h
#include <iostream>
using namespace std;

class IntStack{
private:
    int *stackArray;
    int stackCapacity;
    int top;
public:
    class Excep_over{ };
    class Excep_Under{ };
    IntStack(int size){
        // dynimic assement
        stackArray = new int[size];
        stackCapacity =size;
        top = -1;
    }
    ~IntStack(){
        delete[]stackArray;
    }
   void  destructor();
   void push(int item){
        if(isFull())
//            cout<<" .ERR.The stack is full."<<endl;
            throw Excep_over();
            else
        {
            top++;
            stackArray[top] = item;
        }
    }

    void pop(int &item){
                if(isEmpty())
//                cout << ".ERR.The stack is empty."<<endl;
                    throw Excep_Under();
                else{
                    cout << ".STK. ";
//                    for(int i =0 ; i <=top;i++){
//                        
//                        cout << stackArray[i]<<",";
//                        
//                    }
                    
                    item = stackArray[top];
                    top--;
    }
    }
   bool isFull(){
       if(top >= stackCapacity - 1) return true;
       return false;
    }
   bool isEmpty(){
        if(top== -1) return true;
        return false;
    }
    void display(){
                if(isEmpty())
                cout << ".ERR.The stack is empty."<<endl;
                else{
                    cout << ".STK. ";
                    for(int i =0 ; i <=top;i++){
                        cout << stackArray[i]<<",";
                    }
                }
    }
};

#endif /* InsStack_h */
