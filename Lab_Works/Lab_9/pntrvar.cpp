//Program to illustrate the function of pointer variable
#include<iostream>
using namespace std;

class box{
    private:
        double length;
        double breadth ;
        double height;

    public:
        box(double len, double brd, double hgt){
            
            cout<<"Constructor is called"<<endl;
            length= len;
            breadth = brd;
            height =  hgt;
        }

        double volume(){
            return length* breadth * height;
        }
};


int main(){
    
    box b1(1.2,2.4,3.6), b2(2.5,3.5,4.5);
    box *ptrbox;
    cout<<"Address of box 1 variable : "<<&b1<<endl;
    //Pointer ysto khal ko variable ho jasle aru variable ko address lai aafule carry garna sakxa. In this case, box 1  variable ko address lai,
    //ptrbox variable le carry garna sakxa.

    ptrbox = &b1;

    //Excess the member function using member excess operator(->)

    cout<<"Volume of box 1 : "<<ptrbox->volume()<<endl;

    //Save the address of second object
    ptrbox = &b2;
    cout<<"Volume of box 2 : "<<ptrbox->volume()<<endl;

}