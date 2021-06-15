#include<iostream>
using namespace std;

class Room{
    private:
        double length;
        double breadth;
        double height;

    public:
        double setarea( double len, double bth, double hgt){
        
            length = len;
            breadth = bth;
            height = hgt;
            
        }

        double calculateArea(){
            return length* breadth;
        }

        double calculateVolume(){
           return length* breadth *height;   
        }
};

int main(){
    Room room1;

    room1.setarea(10,10.0,10.0);
    cout<<"\n\tThe area of room1 is : "<<room1.calculateArea()<<" unit square.";
    cout<<"\n\tThe volume of the room1 is : "<<room1.calculateVolume()<<" unit cube.";
    }