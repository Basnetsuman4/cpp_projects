#include<iostream>
using namespace std;

class operate{

    int a, b, c;

        public:

            void get_data(int x, int y , int z){

                a = x;
                b = y;
                c = z;
            }

            void display(){
                cout<<"Value of a :"<<a<<endl;
                cout<<"Value of b :"<<b<<endl;
                cout<<"Value of c :"<<c<<endl;
            }

            void operator ++(){
                a = a+4;
                b = b+3;
                c = c+2;
            }

};

int main(){
    operate obj1;
    
    obj1.get_data(1,2,3);
    cout<<"Values before using operator :"<<endl;
    obj1.display();

    ++obj1;
    cout<<"Values after using operator :"<<endl;
    obj1.display();
}