//Illustration of Constructor//
#include<iostream>
using namespace std;

class Construct 
{

    public:
        int  a, b;
    Construct() //Default Constructor//
    {


        a = 10;
        b = 20;
    }
};
int main(){
    Construct c;
    cout<<"a: "<<c.a<<endl;
    cout<<"b: "<<c.b;
    return 1;
}