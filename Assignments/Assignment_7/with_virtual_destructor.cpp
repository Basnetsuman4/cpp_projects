#include<iostream>
using namespace std;


class Base
{
    public:
        Base()
        {
            cout<<"Constructor of Base being called"<<endl;
        }

        virtual void display()
        {
            cout<<"Virtual display"<<endl;
        }

        virtual ~Base()
        {
            cout<<"Destructor of Base being called"<<endl;
        }
};

class Derived1 : public Base 
{   
    public:
        
        Derived1()
        {
            cout<<"Constructor of Derived class being called"<<endl;
        }

        ~Derived1()
        {
            cout<<"Destructor of Derived class being called"<<endl;
        }

};

int main()
{
      Base *b;  //Calling pointer to Base

    b = new Derived1;   //Derived1 ko data ko address pointer ko through bata chai dynamically allocacte garne

    b->display();

    delete b;   //removal of the pointer allocation by pointer-variable 
}

//virtual use garera destructor call garda chai , delete le b ko memory space free gardinxa ani base ra derived duitai class ko destructor call hunxa
