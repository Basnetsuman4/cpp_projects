#include<iostream>
using namespace std;


class Base 
{
    int x;
    public:
        virtual void fun() = 0; // virtaul le garda chai kunai derived obj le base ko function 
        int get_x(){
            return 0;
        }       
};

class Derived : public Base
{
    int y;

     public:
        void fun(){
            cout<<"Fun function is called"<<endl;

        }
};

int main(){
    //Base b;    //cannot declare variable 'b' to be of abstract type 'Base'
    Derived d1;
    d1.fun();
    return 0;

}