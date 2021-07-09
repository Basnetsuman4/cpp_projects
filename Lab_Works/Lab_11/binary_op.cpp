#include<iostream>
using namespace std ;

class binary{

    private:
        int a, b;
    
    public:
        binary(){
            a = 0;
            b = 0;
        }
        binary(int X, int Y){
            a = X;
            b = Y;
        }

        binary operator +(binary bin){
            binary temp;

            cout<<"Value of temp a inside overloading function"<<temp.a<<endl;
            cout<<"Value of temp b inside overloading function"<<temp.b<<endl;
            
            cout<<"Value of temp a inside overloading function"<<bin.a<<endl;
            cout<<"Value of temp b inside overloading function"<<bin.b<<endl;

            temp.a = a + bin.a;
            temp.b = b + bin.b;
        
            return temp;
        }

        void dispaly();
};

void binary::dispaly(){
    cout<<"Value of a :"<<a<<endl;
    cout<<"Value of b :"<<b<<endl;
}

int main(){
    binary b1, b2, b3;
    b1 = binary(10,20);
    b2 = binary(30,40);
    b3 = b1 + b2;
    b1.dispaly();
    b2.dispaly();
    b3.dispaly();
}