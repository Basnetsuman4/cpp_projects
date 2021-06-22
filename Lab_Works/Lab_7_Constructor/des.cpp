//Illustratioi of destructor through example
#include<iostream>
using namespace std;

class helloworld
{
    public:

    helloworld(){
        cout<<"Constructor is called"<<endl;
    }

    ~helloworld(){
        cout<<"Destructor is called"<<endl;
    }

    void display(){
        cout<<"Hello world!"<<endl;
    }
};

int main(){
    helloworld obj;
    obj.display();
    return 0;
}
/* Constructor is called first
Helloworld is displayed in second
and descructor is called last(Destructor ko main kam chai code lai optimization garne ho)*/
