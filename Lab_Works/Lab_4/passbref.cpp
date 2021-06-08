#include<iostream>
using namespace std;

void num1(int a)//Here the vlaue is passed and the value remain only inside this function and don't get sent to the main function//
    {
        cout<<"The value of a before altering is : "<<a<<endl;
        a = 8;
        cout<<"The value of a after altering is : "<<a<<endl;
    }   

void funRef(int &b)// Here the address is passed so that the value inside the address is accessed an is called in the main function//
    {
        b = 6;
        cout<<"Value of b is : "<<endl;
    }


int main()
    {
        int a = 4;
        int b = 3;
        num1(a);
        funRef(b);
        cout<<"Value of a is in int main : "<<a<<endl;
        cout<<"Value of b is in int main : "<<b<<endl;
    }