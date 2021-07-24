#include<iostream>
using namespace std;


class Shape
{
    protected:
        int width;
        int height;

    public:
        Shape(int x = 0, int y = 0)
        {
            width = x;
            height = y;
             
        }     

         virtual void area()
        {
            cout<<"Parent class area."<<endl;
        }
};

class Rectangle : public Shape
{
    public:
        Rectangle(int a , int b)
        {
            width = a;
            height = b;
        }

        virtual void area()
        {
            cout<<"Area of rectangle"<<width*height<<endl;
        }
};

class Triangle : public Shape
{
    public:
    Triangle(int a,int b)
    
    {
        width = a;
        height = b;

    }

     virtual void area()
    {
        cout<<"Area of triangle"<<width*height*0.5<<endl;
    }
};

int main()
{
    Shape *shape;
    Rectangle R1(10,20);
    Triangle T1(10,10);

    shape = &R1 ;
    shape->area();
    shape = &T1 ;
    shape->area();
    return 0;
}
