#include<iostream>
using namespace std;

class Room{

            public:
            double length;
            double breadth;
            double height;

            double caclulateArea(){
                return length*breadth;
            }

            double calculateVolume(){
                return length*breadth*height;
            }

          };

int main(){
    Room room1;

    room1.length = 42.5;
    room1.breadth = 30.8;
    room1.height = 19.2;
    cout<<"\n\tArea of the room is : "<<room1.caclulateArea()<<" unit square."<<endl;
    cout<<"\n\tVolume of the room is : "<<room1.calculateVolume()<<"unit cube."<<endl;
    return 0;


}