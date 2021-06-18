//Program to illustrate Constructor Overloading//
#include<iostream>
#include<math.h>
using namespace std;

class Room
{
    private:
        double length;
        double breadth;
        double height;

    public:
        Room()      //Constructor with no argument//
            {
                length = 5.2;
                breadth = 4.8;
                height = 4.9;
            }

        Room(double l)      //Constructor with single argument//
            {
                length = l;
                breadth = 6.2;
                height = 5.4; 
            }

        Room(double l , double b)        //Constructor with double argument//
            {
                length = l;
                breadth = b;
                height = 10.1;

            }
        Room(double l , double b , double h)        //Constructor with triple argument//
            {
                length = l;
                breadth = b;
                height = h;
            }

         double calculateVolume()
        {
            return length*breadth*height;
        }
};

int main()
{
    Room room1, room2(8.2), room3(6.3,4.5), room4(8.0, 6.1 , 5.8);

    
    cout<<"\n\tVolume of the room 1 : "<<room1.calculateVolume()<<endl;
    
    cout<<"\n\tVolume of the room 2 : "<<room2.calculateVolume()<<endl;
    
    cout<<"\n\tVolume of the room 3 : "<<room3.calculateVolume()<<endl;
    
    cout<<"\n\tVolume of the room 4 : "<<room4.calculateVolume()<<endl;

    return 0;   
}