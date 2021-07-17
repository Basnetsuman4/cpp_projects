//Ilustraction of abstract class and pure virtual function
#include<iostream>
using namespace std;


class Animal
{
    virtual void eat() = 0;     //Pure virtual function
};

class Cat : public Animal
{
    public:

        void eat()   // It is compulsary to use this function, if not used then it show the class as abstract class due to which we cannot make its object
        {
            cout<<"It eats meat"<<endl;
        }


        void move()
        {
            cout<<"It moves by 4 legs"<<endl;
        }
};

int main()
{
     

    Cat c;

    c.eat();

    return 0;
}
