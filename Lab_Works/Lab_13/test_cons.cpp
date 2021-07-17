// can construcor be used in abstract class or not

#include<iostream>
using namespace std;


class Animal
{
    public:
        Animal(){
                cout<<"Constructor"<<endl;
        }
            virtual void eat() = 0;
};

class Dog : public Animal
{
    public:

    void eat()
    {
        cout<<"Happy meals"<<endl;
    }
        void sleep()
        {
            cout<<"It sleeps on the couch"<<endl;
        }
};

int main()
{
  
    Dog d;

     
    d.eat();
}


/*Output
Constructor
Happy meals
*/