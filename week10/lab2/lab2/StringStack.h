//
//  StringStack.h
//  lab2
//
//  Created by Jeff on 10/17/16.
//  Copyright © 2016 Jeff zhang. All rights reserved.
//

#ifndef StringStack_h
#define StringStack_h

//
//  InsStack.h
//  lab1
//
//  Created by Jeff on 10/17/16.
//  Copyright © 2016 Jeff zhang. All rights reserved.
//

#include <string>
#include <iostream>
using namespace std;

class StringStack{
private:
    string *stackArray;
    int stackCapacity;
    int top;
public:
    class Excep_over{ };
    class Excep_Under{ };
      StringStack(int size){
        // dynimic assement
        stackArray = new string[size];
        stackCapacity =size;
        top = -1;
    }
    ~StringStack(){
        delete[]stackArray;
    }
  //    destructor();
    
    void push(string item){
        if(isFull())
            //            cout<<" .ERR.The stack is full."<<endl;
            throw Excep_over();
        else
        {
            top++;
            stackArray[top] = item;
        }
    }
    void pop(string &item){
        if(isEmpty()){
            throw Excep_Under();
        }
        else{
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


#endif /* StringStack_h */
