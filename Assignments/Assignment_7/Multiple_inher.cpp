#include<iostream>
using namespace std;


class Parent{
    
    public:
        
        Parent()
        {
            cout<<"Parent constructor is called."<<endl;
        }
        
        ~Parent()
        {
            cout<<"Parent  destructor is called."<<endl;
        }

};

class child1  //Derived class(first)
{
 
    public:
        child1()
        {
            cout<<"child1 constructor is called."<<endl;
        }
        
        ~child1()
        {
            cout<<"Child1 destructor is called."<<endl;
        }
};

class child2 :public child1, public Parent
{
    public:

        child2()
        {
            cout<<"Child2 constructor is called."<<endl;
        }
        
        ~child2()
        {
            cout<<"Child2 destructor is called."<<endl;
        }
    
};

int main()
{
    child2 c2;
    return 0;
}
 
