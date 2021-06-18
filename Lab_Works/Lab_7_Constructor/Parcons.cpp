//Illustration of parameterized constructor//
#include<iostream>
using namespace std;

class point{
    private:
    int x, y;
    public:

    point(int x1 ,int y1)   //Parameterized Constructor (Argument pass hune : parametarized)//
    {
        x = x1;
        y = y1;

    }

    int getx()
    {
        return x;
    }

    int gety()
    {
        return y;
    }
    
};



int main(){

    point p1(10,15);
    cout<<"X :"<<p1.getx()<<"  Y : "<<p1.gety()<<endl;
}