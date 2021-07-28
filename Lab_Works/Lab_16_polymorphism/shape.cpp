/*Create  a  base  class  called  shape. Use  this  class  to  store  two  double  type  values  that  could  be 
used  to  compute  the  area  of  figures. Derive  two  specific  classes  called  triangle  and  rectangle 
from  the  base  shape. Add  to  the  base  class,  a  member  function  get_data() to  initialize  base 
class  data members  and  another  member  function  print_area() to  compute and  display  the
area  of  figures. Make  print_area() as  virtual  function  and  redefine  this  function  in  the 
derived class to suit their requirements
*/
#include<iostream>
using namespace std;


class Shape 
{
    protected:
        double length, breadth;

   public: 
        void get_data(double len, double brd)
        {
            length = len;
            breadth = brd;
        }

        virtual void print_area() = 0;
};


class Triangle : public Shape
{
    public:
        void print_area()
        {
            cout<<"The area of the triangle is : "<<0.5*length*breadth<<endl;
        }
};


class Rectangle : public Shape
{
    public:
        void print_area()
        {
            cout<<"The area of the rectangle is : "<< length * breadth<<endl;
        }
};


int main()
{
    Triangle T1;
    Rectangle R1;

    T1.get_data(20,30);
    R1.get_data(10,2);

    T1.print_area();
    R1.print_area();
    return 0;
}