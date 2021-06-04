#include<iostream>
using namespace std;

void get_sum(int i, int j)
{
    cout<<"\n\tThe sum of the numbers is :"<<i+j<<endl;
}

void get_sum(double a, int b, double c)
{   
    cout<<"\n\tThe sum of the numbers is :"<<a+b+c<<endl;
}

void get_sum(int x, double y)
{    
    cout<<"\n\tThe sum of the number is :"<<x+y<<endl;
}

int main()
{
    get_sum(5,5);
    cout<<endl;
    get_sum(1.1,2,1.1);
    cout<<endl;
    get_sum(8,1.5);
    cout<<endl;

}