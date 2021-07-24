#include<iostream>
using namespace std;


class A{
    public:
    void print(int x)
    {
        x = 10;
        cout<<"Class A"<<x<<endl;
    }
};

class B: public virtual A{
    public:
    void print(int y)
    {
        y =20;
        cout<<"Class B"<<y<<endl;
    }
};
class C : public virtual A{
    public:
    void print(int z)
    {   z=30;
        cout<<"Class C"<<z<<endl;
    }
};
class D : public B, public C{
    public:
    void print(int p)
    {
            p = 100;
        cout<<"Class D"<<endl;
    }
};
int main(){
D d1;
d1.A::print(5);


}