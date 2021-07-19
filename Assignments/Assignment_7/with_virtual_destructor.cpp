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
    Base *b;

    b = new Derived1;   

    b->display();

    delete b;
}