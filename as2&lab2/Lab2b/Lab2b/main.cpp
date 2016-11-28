#include <iostream>
#include <list>
#include <vector>

bool contains(std::list<int> mylist,int elem){
    std::list<int>::iterator it;
    for(it=mylist.begin();it!=mylist.end();++it)
        if(*it ==elem)return true;
    return false;
    
}


int main ()
{
    std::list<int> mylist;
    std::list<int>::iterator it;
    
    if(mylist.empty()) std::cout << "This newly created list contains nothing\n";
    
    // set some initial values:
    for (int i=1; i<=10; ++i) mylist.push_back(i);
    
    if(!mylist.empty()) std::cout << "This list contains something\n";
    
    std::cout << "mylist contains:";
    for (it=mylist.begin(); it!=mylist.end(); ++it)
        std::cout << ' ' << *it;
    std::cout << '\n';
    
    
    for(it=mylist.begin(); it!=mylist.end(); ++it)
    {
        if((*it) %2 == 0){
           it = mylist.erase(it);
            it --;
        }
      
    }
    
    std::cout << "mylist contains:";
    for (it=mylist.begin(); it!=mylist.end(); ++it)
        std::cout << ' ' << *it;
    std::cout << '\n';
    
    for (int i=1; i<=3; ++i) mylist.push_back(i);
    
    std::cout << "mylist contains:";
    for (it=mylist.begin(); it!=mylist.end(); ++it)
        std::cout << ' ' << *it;
    std::cout << '\n';
    
    for(int i=4;i<=6;i++){
        std::cout<< "list contains: "<<i ;
        if(contains(mylist,i))
            std::cout << "yes" << '\n';
            else
                std::cout << "no" << '\n';
    }
    
    mylist.sort();
    std::cout << "mylist contains:";
    for (it=mylist.begin(); it!=mylist.end(); ++it)
        std::cout << ' ' << *it;
    std::cout << '\n';
    
    std::cout << "mylist has:" << mylist.size()<<"items. \n" ;
    
    
    return 0;
}