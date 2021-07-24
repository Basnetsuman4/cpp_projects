#include<iostream>
using namespace std;


class Base
{
    public:
        virtual void print()
        {
            cout<<"Base"<<endl;
        }
};


class Derived : public Base{
    public:
        void print()
        {
            cout<<"Derived 1"<<endl;
        }
};


int main()
{
    Base *bptr, bpt;
    Derived *dptr, dpt;

    bptr=&dpt; //base pointer hold address of derived class object

    dptr = dynamic_cast<Derived *> (bptr);// base pointer lai derived pointer ma cast garna, no error as bptr is holding address of derived class

   dptr->print;

        //bptr = &bpt;
        //dpyr =  dynamic_cast <Derived *> (bptr);


    if (dptr ==nullptr)
    {
        cout<<"Null pointer"<<endl;
    }
    else
    {
        cout<<"Not null"<<endl;
    }

    return 0;
}
