//
//  InsStack.h
//  lab1
//
//  Created by Jeff on 10/17/16.
//  Copyright © 2016 Jeff zhang. All rights reserved.
//

#ifndef InsStack_h
#define InsStack_h
#include <iostream>
using namespace std;

class InStack{
private:
    int *stackArray;
    int stackCapacity;
    int top;
public:
    constructor(int size){
        // dynimic assement
        stackArrey = new int[size];
        stackCapacity =size;
        top = -1;
    }
    ~InStack(){
        delete[]stackArray;
    }
    destructor()
   void push(int item){
        if(isFull())
            cout<<" .ERR.The stack is full."<<endl;
            else
        {
            top++
            stackArray[top] = item;
        }
    }
//    void pop(int item){
//        int item =911;
//        if(isEmpty())
//        cout << ".ERR.The stack is empty."<<endl;
//        else{
//            item = stackArray[top];
//            top--;
//          
//            }  return item;
//        }
    void pop(int &item){
        
    }
   bool isFull(){
       if(top >= stackCapacity - 1) return true;
       return false;
    }
   bool isEmpty(){
        if(top== -1) return true;
        return false;
    }
    display(){
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
