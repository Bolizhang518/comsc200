//
//  IntLinkedQueue.h
//  lab11b
//
//  Created by Jeff on 10/24/16.
//  Copyright © 2016 Jeff zhang. All rights reserved.
//

#ifndef IntLinkedQueue_h
#define IntLinkedQueue_h
#include<iostream>
#include<string>
using namespace std;

class IntLinkedQueue{
    private:
    struct Node{
        int data;
        Node *next;
    };
    Node *front, *rear,*p,*pp;
    int size;
    
    public:
    IntLinkedQueue():front(nullptr),rear(nullptr),size(0){};
    ~IntLinkedQueue(){
        clear();
    };
    bool isEmpty(){
        if(front == nullptr){
            return true;
        }
        else
            return false;
    }
    int getSize()const{
        return size;
    };
    void clear(){
        p = front;
        while(p){
            pp = p;
            p = p -> next;
            delete (pp);
            size--;
        }
        front = rear = p = pp = nullptr;
        size = 0;
    }
    string toString(){
        std::string s = "";
        p = front;
        while(p){
            stringstream ss;
            ss << p->data;
            s += ss.str();
            p = p->next;
            s +=(p)?",":"";
        }
        return s;
    }
    void add(int n){
        p = new Node;
        p->next = nullptr;
        p->data = n;
        
        if(!front){
            front = rear = p;
        
        }
        else {
            p ->next =  front;
            front = p;
            
        }
        size++;
    }
    
    void remove (int &n){
        if(front != rear){
        p = front ;
        while(p->next!=rear){
            
            p = p -> next;
         }
            n = p ->data;
            size --;
            delete(rear);
            rear = p ;
            rear -> next = nullptr;
        }
        else{
           // n = p ->data;
            delete (rear);
            size = 0 ;
            front = rear = p = pp = nullptr;
        }
    }
};





#endif /* IntLinkedQueue_h */
