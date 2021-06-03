#include<iostream>
#include<math.h>
using namespace std;

float get_area();
int main()
{   
    float area;
    area=get_area();
    cout<<"\n\tThe area of the triangle is : "<<area;
     
}

float get_area()
{    
    float s, side1, side2 , side3, area;
    cout<<"\tEnter the first side of the triangle : ";
    cin>>side1;
    cout<<"\n\tEnter the second side of the trianlge : ";
    cin>>side2;
    cout<<"\n\tEnter the third side of the triangle : ";
    cin>>side3;
    s = ((side1 + side2 + side3)/2);
    area = sqrt(s*(s-side1)*(s-side2)*(s-side3));
     
    return area;
    

}     
