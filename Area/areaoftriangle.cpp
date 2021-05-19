#include<iostream>
using namespace std;
int main()
{
    float base, height, area;
    cout<<"\tEnter the base of the triangle : ";
    cin>>base;
    cout<<" unit.";
    cout<<"\t\nEnter the height of the triangle : ";
    cin>>height;
    cout<<" unit.";
    area = 0.5*base*height;
    cout<<"\t\nThe area of the triangle is : "<<area<<" unit square";
    return 0;
}

