#ifndef Q_H
#define Q_H
#include <iostream>
#include <string>

template <class T>
class Q {
private:
    struct Node {
        T data;
        Node *next;
    };
    Node *front, *rear, *p, *pp; // pp is previous p
    int size;
public:
    class OutOfRangeSubscription {
    private:
        int value;
    public:
        OutOfRangeSubscription(int sub) {value = sub;}
        int getValue() const { return value; }
    };
    
    Q() : front(nullptr), rear(nullptr), size(0) {};
    ~Q() { clear(); };
    bool isEmpty() {
        if(front == nullptr) return true;
        return false;
    };
    
    int getSize() const { return size; };

    void clear() {
        p = front;
        while(p) {
            delete(p);
            p = p->next;
            size--;
        }
        size =0;
        front=rear=pp=p=nullptr;
    };
    
    std::string toString() {
        std::string s = "";
        p = front;
        while(p) {
            std::stringstream ss;
            ss << p->data;
            s += ss.str();
            p = p->next;
            s += (p)?", ":"";
        }
        return s;
    };

    
    void push_front(T item) {
        p = new Node;
        p->next = nullptr;
        p->data = item;
        
        if(!front) {
            front = rear = p;
        } else {
            p->next = front;
            front = p;
        }
        size++;
    };
    
    void push_back(T item) {
        p = new Node;
        p->next = nullptr;
        p->data = item;
        
        if(!front) // empty Q
            front = rear = p;
        else {
            rear->next = p;
            rear = p;
        }
        size++;
    };
    
    bool pop_front( T &item ) {
        if( size <= 0 ) return false;
        else {
            item = front->data;
            delete(front);
            if( front==rear )
                front = rear = pp = p = nullptr;
            else
                front = front->next;
        }
        size--;
    }
    
    bool pop_back( T &item ) {
        if( size <= 0 ) return false;
        else if(front != rear) {
            p = front;
            while(p->next != rear) { // this item is not last one!
                p = p->next;
            }
            item = rear->data;
            size--;
            delete(rear);
            rear = p;
            rear->next = nullptr;
        } else {
            item = rear->data;
            delete(rear);
            front = rear = pp = p = nullptr;
            size = 0;
        }
        return true;
    };
    
    T& operator[](const int &sub){
        if( 0<= sub && sub < getSize() ) {
            p = front;
            int count = 0;
            while(p) {
                if(count == sub)
                    return p->data;
                p = p->next;
                count++;
            }
        }
        else
            throw OutOfRangeSubscription(sub);
    };
};

#endif