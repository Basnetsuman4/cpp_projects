/*Write a program to generate Fibonacci series using operator overloading of ++ operator*/
// For pre-increment
#include<iostream>
using namespace std;

class Fibonacii
{
    public:
       int inc, num1 = 0 , num2 = 1;

    void  operator ++()
    {
        cout<<"\t"<<num1<<" ";
        inc = num1 + num2;
        num1 = num2;
        num2 = inc;
    } 
};

int main()
{
    Fibonacii obj;
    int count;
    cout<<"How many numbers to be printed ?"<<endl;
    cin>>count;
    for (int i = 0; i < count; i++)
        {
            ++obj;
        }
    

}