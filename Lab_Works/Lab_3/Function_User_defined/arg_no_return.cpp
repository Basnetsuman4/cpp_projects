#include<iostream>
#include<math.h>
using namespace std;

void get_area(float side1 , float side2, float side3);
int main()
{   
    float  s, area,side1 , side2 , side3;
    cout<<"\tEnter the  first side of the triangle : ";
    cin>>side1;
    cout<<"\n\tEnter the second side of the triangle : ";
    cin>>side2;
    cout<<"\n\tEnter the third side of the triangle : ";
    cin>>side3;
    get_area(side1, side2, side3);
    return 0;
}
void get_area(float side1 , float side2, float side3)
{
    float s, area; 
    s=((side1 + side2 +side3)/2);
    area = sqrt(s*(s-side1)*(s-side2)*(s-side3));
    cout<<"\n\tThe area of the triangle is : "<<area<<" unit square.";
}