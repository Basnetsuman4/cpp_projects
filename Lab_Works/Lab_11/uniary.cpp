#include<iostream>
using namespace std ;

class unary{
    int a,b,c;

    public:

        void get_data(int x, int y , int z){
            a = x;
            b = y;
            c = z;
        }
        // retuen type operator op() eg ++ , -- 

        void operator -(){
            a = -a;
            b = -b;
            c= -c;
        }

        void display(){
            cout<<"Value of a "<<a<<endl;
            cout<<"Value of b "<<b<<endl;
            cout<<"Value of c "<<c<<endl;
        }
};

int main(){
    unary obj1 ,obj2;
    obj1.get_data(2, 4, -5);
    obj1.display();
    -obj1;
    obj1.display();
}