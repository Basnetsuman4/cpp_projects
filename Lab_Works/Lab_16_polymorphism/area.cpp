#include<iostream>
using namespace std;


class Area 
{   
    private:
        float length, breadth, height , base;

    public:
        void calc_area(double length)
        {
           cout<<"The area of square is : "<<length*length<<" unit square."<<endl;
        }

        void calc_area(int length,int  breadth)
        {
            cout<<"The area of the rectangle is : "<<length*breadth<<" unit square."<<endl;
        }

        void calc_area(double base, double height )
        {
            cout<<"The area of triangle is : "<<0.5*base*height<<" unit square."<<endl;
        }
};

int main()
{
    Area A1;
    A1.calc_area(5.2);
    A1.calc_area(5,2);
    A1.calc_area(20.0,1.0);
    return 0;

}